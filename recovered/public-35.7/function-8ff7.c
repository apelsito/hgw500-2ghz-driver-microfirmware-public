/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8ff7, function FUN_CODE_8ff7 */

void FUN_CODE_8ff7(void)

{
  FUN_CODE_5575();
  DAT_EXTMEM_a1db = 4;
  FUN_CODE_4797(2);
  DAT_EXTMEM_9d01 = DAT_EXTMEM_9d01 | DAT_EXTMEM_a1db;
  return;
}


