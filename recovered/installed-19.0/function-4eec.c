/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4eec, function FUN_CODE_4eec */

void FUN_CODE_4eec(byte param_1)

{
  DAT_INTMEM_72 = param_1;
  FUN_CODE_4797(2);
  DAT_EXTMEM_a194 = DAT_EXTMEM_a194 | DAT_INTMEM_72;
  return;
}


