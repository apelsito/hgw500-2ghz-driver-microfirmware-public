"""Independently verify exported native instructions against source bytes."""

import csv
import hashlib
import json
from pathlib import Path


OUTPUT = Path(__file__).resolve().parent
SOURCE = Path("/workspace/build/core-r1-product-r3/root/lib/firmware/rtlwifi/rtl8192eefw.bin")
REFERENCE = Path("/workspace/build/root-installed/lib/firmware/rtlwifi/rtl8192eefw.bin")


def main():
    raw = SOURCE.read_bytes()
    assert raw == REFERENCE.read_bytes()
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
    references = list(csv.DictReader((OUTPUT / "ghidra-references.tsv").open(), delimiter="\t"))
    rom = []
    missing = []
    for reference in references:
        if not reference["to"].startswith("CODE:"):
            continue
        address = int(reference["to"].split(":")[-1], 16)
        if address < 0x4000:
            rom.append(reference)
        elif address >= 0x4000 + len(raw) - 32:
            missing.append(reference)
    summary = {
        "schema": "openmitrastar.rtl8192ee-ghidra-byte-verification/v1",
        "status": "PASS_EXPORTED_INSTRUCTIONS_MATCH_ORIGINAL",
        "source_sha256": hashlib.sha256(raw).hexdigest(),
        "original_bytes": len(raw), "payload_bytes": len(raw) - 32,
        "functions_observed": len(functions), "instructions_verified": len(rows),
        "unique_instruction_bytes": len(covered),
        "payload_instruction_coverage_fraction": round(len(covered) / (len(raw) - 32), 6),
        "references_to_absent_lower_CODE": rom,
        "references_beyond_loaded_payload": missing,
        "scope": "Selected entry-point seeded static Ghidra analysis. Undecoded bytes may be code or data. Lower CODE region is absent and may contain mask-ROM routines.",
        "architecture": "8051:BE:16:default", "code_base": "0x4000",
        "hardware_accessed": False, "firmware_modified": False,
    }
    (OUTPUT / "verification.json").write_text(json.dumps(summary, indent=2) + "\n")
    print(json.dumps({key: value for key, value in summary.items() if not key.startswith("references_")}, indent=2))


if __name__ == "__main__":
    main()
