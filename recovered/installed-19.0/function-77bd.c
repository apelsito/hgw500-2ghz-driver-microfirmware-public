/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77bd, function FUN_CODE_77bd */

void FUN_CODE_77bd(char param_1)

{
  DAT_EXTMEM_0573 = param_1 + -1;
  DAT_EXTMEM_013f = 0x10;
  DAT_INTMEM_20 = DAT_INTMEM_20 | 0x10;
  DAT_EXTMEM_013b = DAT_INTMEM_20;
  return;
}


