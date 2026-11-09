/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:666d, function FUN_CODE_666d */

void FUN_CODE_666d(void)

{
  if ((DAT_EXTMEM_a28d == '\x01') && (DAT_EXTMEM_a317 != '\0')) {
    if ((DAT_EXTMEM_a315 & 0xf) != 2) {
      FUN_CODE_979e();
      return;
    }
    FUN_CODE_5757();
  }
  return;
}


