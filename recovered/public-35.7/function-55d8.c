/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:55d8, function FUN_CODE_55d8 */

void FUN_CODE_55d8(byte param_1)

{
  DAT_INTMEM_6d = param_1;
  FUN_CODE_4797(2);
  DAT_EXTMEM_9d01 = DAT_EXTMEM_9d01 | DAT_INTMEM_6d;
  return;
}


