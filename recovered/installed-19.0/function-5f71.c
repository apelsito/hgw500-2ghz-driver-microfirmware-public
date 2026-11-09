/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5f71, function FUN_CODE_5f71 */

void FUN_CODE_5f71(byte param_1)

{
  DAT_EXTMEM_a607 = param_1;
  FUN_CODE_4797(2);
  DAT_EXTMEM_a194 = DAT_EXTMEM_a194 | DAT_EXTMEM_a607;
  return;
}


