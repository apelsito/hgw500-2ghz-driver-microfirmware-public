"""Run private offline firmware inspection with REA and native Ghidra."""

import hashlib
import json
import os
from pathlib import Path
import pwd
import shutil
import struct
import subprocess


OUTPUT = Path(__file__).resolve().parent
WORKSPACE = Path("/workspace/build/evidence/hgw500-rtl8192ee-20261103")
SOURCE = Path("/workspace/build/core-r1-product-r3/root/lib/firmware/rtlwifi/rtl8192eefw.bin")
REFERENCE = Path("/workspace/build/root-installed/lib/firmware/rtlwifi/rtl8192eefw.bin")
GHIDRA = Path("/opt/engineering/tools/ghidra_12.1.3_PUBLIC")


def digest(data):
    return hashlib.sha256(data).hexdigest()


def write_json(name, data):
    (OUTPUT / name).write_text(json.dumps(data, indent=2) + "\n")


def run(name, command, timeout=120):
    completed = subprocess.run(
        ["runuser", "-u", "apelsito", "--"] + command,
        capture_output=True, text=True, timeout=timeout,
    )
    (OUTPUT / (name + ".stdout")).write_text(completed.stdout)
    (OUTPUT / (name + ".stderr")).write_text(completed.stderr)
    try:
        result = json.loads(completed.stdout)
    except json.JSONDecodeError:
        result = None
    write_json(name + ".json", {
        "command": command,
        "returncode": completed.returncode,
        "result": result,
        "stdout_file": name + ".stdout",
        "stderr_file": name + ".stderr",
    })
    print(name, "returncode", completed.returncode, flush=True)
    return completed


def main():
    OUTPUT.mkdir(parents=True, exist_ok=True)
    if WORKSPACE.exists():
        raise RuntimeError("Use a new private analysis workspace")
    raw = SOURCE.read_bytes()
    reference = REFERENCE.read_bytes()
    assert raw == reference
    signature, category, function, version, subversion, reserved1, month, day, hour, minute, ram_size, reserved2, revision = struct.unpack_from("<HBBHBBBBBBHHI", raw)
    payload = raw[32:]
    assert len(payload) == ram_size
    account = pwd.getpwnam("apelsito")
    WORKSPACE.mkdir(mode=0o700)
    os.chown(WORKSPACE, account.pw_uid, account.pw_gid)
    original = WORKSPACE / "rtl8192eefw.bin"
    code = WORKSPACE / "rtl8192ee-code.bin"
    original.write_bytes(raw)
    code.write_bytes(payload)
    for path in (original, code):
        path.chmod(0o600)
        os.chown(path, account.pw_uid, account.pw_gid)
    header = {
        "schema": "openmitrastar.rtl8192ee-firmware-inspection/v1",
        "source": str(SOURCE), "reference": str(REFERENCE),
        "copies_identical": True, "bytes": len(raw), "sha256": digest(raw),
        "header_bytes": 32, "signature": hex(signature), "category": category,
        "function": function, "version": version, "subversion": subversion,
        "timestamp_literal_bytes": [month, day, hour, minute],
        "ramcodesize": ram_size, "revision": revision,
        "payload_sha256": digest(payload), "padding_bytes_to_dword": (-len(payload)) % 4,
        "payload_end_exclusive_at_base_4000": hex(0x4000 + len(payload)),
        "architecture": "8051", "native_ghidra_language": "8051:BE:16:default",
        "code_load_base": "0x4000",
        "code_base_evidence": "Firmware vectors and 8051 interrupt prologues agree at this base. Host firmware download aperture is separately 0x1000.",
        "vectors": [], "hardware_accessed": False,
    }
    for offset in (0, 3, 0x13, 0x23, 0x43):
        assert payload[offset] == 2
        target = int.from_bytes(payload[offset + 1:offset + 3], "big")
        index = target - 0x4000
        header["vectors"].append({
            "code_address": hex(0x4000 + offset), "file_offset": 32 + offset,
            "jump_target": hex(target), "target_file_offset": 32 + index,
            "target_bytes": payload[index:index + 24].hex(),
        })
    write_json("firmware-header.json", header)
    rea = "/usr/local/bin/rea"
    run("rea-artifact", [rea, "inspect-artifact", str(original), "--format", "json"])
    run("rea-entropy", [rea, "inspect-byte-entropy", str(original), "--format", "json"])
    run("rea-regions", [rea, "inspect-firmware-regions", str(original), "--format", "json"], timeout=180)
    run("rea-raw-8051", [rea, "analyze", str(code), "--target-format", "raw-binary", "--architecture", "8051", "--entry-point", "0x4000", "--provider", "ghidra", "--format", "json"])
    completed = run("ghidra-native-8051", [
        str(GHIDRA / "support/analyzeHeadless"), str(WORKSPACE), "rtl8192ee-native",
        "-import", str(code), "-processor", "8051:BE:16:default", "-cspec", "default",
        "-loader", "BinaryLoader", "-loader-baseAddr", "0x4000",
        "-scriptPath", str(OUTPUT), "-preScript", "SeedRTL8192EE.java",
        "-postScript", "ExportRTL8192EE.java", str(OUTPUT),
        "-analysisTimeoutPerFile", "180", "-max-cpu", "2",
    ], timeout=300)
    assert completed.returncode == 0
    assert SOURCE.read_bytes() == raw and REFERENCE.read_bytes() == raw
    write_json("source-preservation.json", {"source_sha256_after": digest(SOURCE.read_bytes()), "reference_sha256_after": digest(REFERENCE.read_bytes()), "unchanged": True})


if __name__ == "__main__":
    main()
