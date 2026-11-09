"""Verify all bundled payload hashes and exported 8051 instruction bytes."""

import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def verify_instructions(binary, export):
    raw = binary.read_bytes()
    rows = list(csv.DictReader(export.open(encoding="utf-8"), delimiter="\t"))
    covered = set()
    for row in rows:
        address = int(row["address"].split(":")[-1], 16)
        offset = int(row["file_offset"])
        data = bytes.fromhex(row["bytes"])
        assert offset == address - 0x4000 + 32
        assert 32 <= offset < offset + len(data) <= len(raw)
        assert raw[offset:offset + len(data)] == data
        positions = set(range(offset, offset + len(data)))
        assert not covered.intersection(positions)
        covered.update(positions)
    return {"instructions": len(rows), "instruction_bytes": len(covered),
            "payload_bytes": len(raw) - 32,
            "coverage_fraction": round(len(covered) / (len(raw) - 32), 6)}


def main():
    manifest = json.loads((ROOT / "MANIFEST.json").read_text(encoding="utf-8"))
    for row in manifest["files"]:
        path = ROOT / row["path"]
        data = path.read_bytes()
        assert len(data) == row["bytes"], row["path"]
        assert hashlib.sha256(data).hexdigest() == row["sha256"], row["path"]
    variants = {
        "installed-19.0": verify_instructions(
            ROOT / "firmware/rtl8192eefw-19.0.bin", ROOT / "analysis/ghidra-instructions.tsv"),
        "public-35.7": verify_instructions(
            ROOT / "firmware/rtl8192eu_nic-35.7.bin", ROOT / "analysis/public-candidate/ghidra-instructions.tsv"),
    }
    print(json.dumps({"status": "PASS", "files_verified": len(manifest["files"]),
                      "variants": variants, "hardware_accessed": False}, indent=2))


if __name__ == "__main__":
    main()
