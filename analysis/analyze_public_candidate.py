"""Analyze the vendor-declared public candidate in its own Ghidra project."""

import base64
import csv
import hashlib
import json
import os
from pathlib import Path
import pwd
import subprocess
import urllib.request


OUTPUT = Path(__file__).resolve().parent / "public-candidate"
WORKSPACE = Path("/workspace/build/evidence/hgw500-rtl8192ee-20261103/public-candidate")


def main():
    OUTPUT.mkdir(exist_ok=False)
    WORKSPACE.mkdir(mode=0o700, exist_ok=False)
    account = pwd.getpwnam("apelsito")
    os.chown(WORKSPACE, account.pw_uid, account.pw_gid)
    comparison = json.loads((OUTPUT.parent / "upstream-comparison.json").read_text())
    with urllib.request.urlopen(comparison["blob_url"], timeout=30) as response:
        raw = base64.b64decode(response.read(), validate=True)
    assert hashlib.sha256(raw).hexdigest() == comparison["upstream_sha256"]
    original = WORKSPACE / "rtl8192eu_nic.bin"
    code = WORKSPACE / "rtl8192eu-nic-code.bin"
    original.write_bytes(raw)
    code.write_bytes(raw[32:])
    for path in (original, code):
        path.chmod(0o600)
        os.chown(path, account.pw_uid, account.pw_gid)
    payload = raw[32:]
    entries = [int.from_bytes(payload[offset + 1:offset + 3], "big") for offset in (0, 3, 0x13, 0x23, 0x43) if payload[offset] == 2]
    command = [
        "/usr/sbin/runuser", "-u", "apelsito", "--",
        "/opt/engineering/tools/ghidra_12.1.3_PUBLIC/support/analyzeHeadless",
        str(WORKSPACE), "rtl8192ee-public-candidate", "-import", str(code),
        "-processor", "8051:BE:16:default", "-cspec", "default",
        "-loader", "BinaryLoader", "-loader-baseAddr", "0x4000",
        "-scriptPath", str(OUTPUT.parent), "-preScript", "SeedPublicRTL8192EE.java",
        "-postScript", "ExportRTL8192EE.java", str(OUTPUT), ",".join(f"{entry:x}" for entry in entries),
        "-analysisTimeoutPerFile", "180", "-max-cpu", "2",
    ]
    completed = subprocess.run(command, capture_output=True, text=True, timeout=300)
    (OUTPUT / "ghidra.stdout").write_text(completed.stdout)
    (OUTPUT / "ghidra.stderr").write_text(completed.stderr)
    assert completed.returncode == 0
    rows = list(csv.DictReader((OUTPUT / "ghidra-instructions.tsv").open(), delimiter="\t"))
    covered = set()
    for row in rows:
        address = int(row["address"].split(":")[-1], 16)
        offset = int(row["file_offset"])
        data = bytes.fromhex(row["bytes"])
        assert offset == address - 0x4000 + 32
        assert 32 <= offset < offset + len(data) <= len(raw)
        assert raw[offset:offset + len(data)] == data
        assert not covered.intersection(range(offset, offset + len(data)))
        covered.update(range(offset, offset + len(data)))
    functions = list(csv.DictReader((OUTPUT / "ghidra-inventory.tsv").open(), delimiter="\t"))
    report = {
        "schema": "openmitrastar.rtl8192ee-public-candidate-native/v1",
        "status": "PASS_EXPORTED_INSTRUCTIONS_MATCH_PINNED_PUBLIC_BLOB",
        "source_sha256": comparison["upstream_sha256"], "upstream_commit": comparison["upstream_commit"],
        "command": command, "vectors": [hex(value) for value in entries],
        "functions_observed": len(functions), "instructions_verified": len(rows),
        "unique_instruction_bytes": len(covered), "payload_bytes": len(payload),
        "payload_instruction_coverage_fraction": round(len(covered) / len(payload), 6),
        "architecture": "8051:BE:16:default", "code_base": "0x4000",
        "hardware_accessed": False, "installed": False,
        "scope": "Entry vector seeded static analysis. This is a partial reconstruction, with unavailable ROM and indirect dispatch remaining unresolved.",
    }
    (OUTPUT / "verification.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps({key: value for key, value in report.items() if key != "command"}, indent=2))


if __name__ == "__main__":
    main()
