/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b7ae, function FUN_CODE_b7ae */

void FUN_CODE_b7ae(char param_1)

{
  FUN_CODE_66c8(BANK0_R7);
  if ((param_1 == '\x01') && ((DAT_EXTMEM_a30e >> 6 & 1) != 1)) {
    FUN_CODE_50bd(1,BANK0_R6);
    return;
  }
  return;
}


