/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:624e, function FUN_CODE_624e */

void FUN_CODE_624e(char param_1)

{
  DAT_EXTMEM_a1e0 = param_1;
  FUN_CODE_5499();
  if (DAT_EXTMEM_a1e0 != '\0') {
    FUN_CODE_58a2();
  }
  FUN_CODE_6631();
  DAT_EXTMEM_9e4c = 4;
  return;
}


