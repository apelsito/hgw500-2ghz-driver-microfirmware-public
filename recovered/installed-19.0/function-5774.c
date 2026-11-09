/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5774, function FUN_CODE_5774 */

void FUN_CODE_5774(void)

{
  if (((DAT_EXTMEM_a3bd & 1) != 1) && (DAT_EXTMEM_a317 == '\x01')) {
    FUN_CODE_97c8();
    if ((DAT_EXTMEM_a315 & 0xf) != 0) {
      FUN_CODE_50bd(0,0xc);
      FUN_CODE_53ba(0,0);
      FUN_CODE_b8f5();
      return;
    }
    if (DAT_EXTMEM_a31a == '\0') {
      FUN_CODE_50b9();
    }
  }
  return;
}


