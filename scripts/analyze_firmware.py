"""Reproduce REA inspection and native 8051 exports for either pinned firmware."""

import argparse
import hashlib
import json
from pathlib import Path
import struct
import subprocess

SCRIPTS = Path(__file__).resolve().parent
VARIANTS = {
    "c6e5beeeb2a716ce417a9ede5974d0876b18ebf0368c195da8a181f6ba6d9b4b": "SeedRTL8192EE.java",
    "b15bc955fba2fc3abc093affe62c9f7284a0b84d4f13f8ce55366488dc9aad8b": "SeedPublicRTL8192EE.java",
}


def run(output, label, command, timeout):
    result = subprocess.run(command, capture_output=True, text=True, timeout=timeout)
    (output / f"{label}.stdout").write_text(result.stdout, encoding="utf-8")
    (output / f"{label}.stderr").write_text(result.stderr, encoding="utf-8")
    receipt = {"command": command, "returncode": result.returncode}
    (output / f"{label}.json").write_text(json.dumps(receipt, indent=2) + "\n")
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--firmware", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--workspace", type=Path, required=True)
    parser.add_argument("--rea", default="/usr/local/bin/rea")
    parser.add_argument("--ghidra", type=Path,
                        default=Path("/opt/engineering/tools/ghidra_12.1.3_PUBLIC"))
    args = parser.parse_args()
    raw = args.firmware.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    if digest not in VARIANTS:
        parser.error("Use one of the two firmware snapshots pinned in MANIFEST.json")
    if args.output.exists() or args.workspace.exists():
        parser.error("Choose absent output and workspace directories")
    payload = raw[32:]
    assert len(payload) == struct.unpack_from("<H", raw, 12)[0]
    args.output.mkdir(parents=True)
    args.workspace.mkdir(parents=True, mode=0o700)
    original = args.workspace / "firmware.bin"
    code = args.workspace / "code.bin"
    original.write_bytes(raw)
    code.write_bytes(payload)
    original.chmod(0o600)
    code.chmod(0o600)
    for label, command in (
        ("rea-artifact", [args.rea, "inspect-artifact", str(original), "--format", "json"]),
        ("rea-entropy", [args.rea, "inspect-byte-entropy", str(original), "--format", "json"]),
        ("rea-regions", [args.rea, "inspect-firmware-regions", str(original), "--format", "json"]),
        ("rea-raw-8051", [args.rea, "analyze", str(code), "--target-format", "raw-binary",
                          "--architecture", "8051", "--entry-point", "0x4000", "--provider",
                          "ghidra", "--format", "json"]),
    ):
        run(args.output, label, command, 180)
    entries = [int.from_bytes(payload[offset + 1:offset + 3], "big")
               for offset in (0, 3, 0x13, 0x23, 0x43) if payload[offset] == 2]
    command = [str(args.ghidra / "support/analyzeHeadless"), str(args.workspace), "rtl8192ee",
               "-import", str(code), "-processor", "8051:BE:16:default", "-cspec", "default",
               "-loader", "BinaryLoader", "-loader-baseAddr", "0x4000", "-scriptPath", str(SCRIPTS),
               "-preScript", VARIANTS[digest], "-postScript", "ExportRTL8192EE.java",
               str(args.output), ",".join(f"{entry:x}" for entry in entries),
               "-postScript", "ExportAllRTL8192EE.java", str(args.output / "recovered"),
               "-analysisTimeoutPerFile", "180", "-max-cpu", "1"]
    result = run(args.output, "ghidra-native-8051", command, 600)
    if result.returncode:
        raise RuntimeError("Native Ghidra export failed. Review ghidra-native-8051.stderr")
    assert (args.output / "ghidra-instructions.tsv").stat().st_size > 100
    assert (args.output / "recovered/functions.tsv").stat().st_size > 100
    assert hashlib.sha256(args.firmware.read_bytes()).hexdigest() == digest
    receipt = {"source_sha256": digest, "bytes": len(raw), "architecture": "8051:BE:16:default",
               "code_base": "0x4000", "hardware_accessed": False, "source_unchanged": True,
               "scope": "Static entry-seeded analysis. ROM and indirect targets remain incomplete."}
    (args.output / "provenance.json").write_text(json.dumps(receipt, indent=2) + "\n")
    print(json.dumps(receipt, indent=2))


if __name__ == "__main__":
    main()
