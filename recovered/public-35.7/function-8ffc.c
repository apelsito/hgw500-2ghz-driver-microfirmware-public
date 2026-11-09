/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8ffc, function FUN_CODE_8ffc */

void FUN_CODE_8ffc(byte param_1)

{
  DAT_EXTMEM_a1db = param_1;
  FUN_CODE_4797(2);
  DAT_EXTMEM_9d01 = DAT_EXTMEM_9d01 | DAT_EXTMEM_a1db;
  return;
}


