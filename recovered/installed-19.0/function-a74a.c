/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a74a, function FUN_CODE_a74a */

void FUN_CODE_a74a(void)

{
  DAT_EXTMEM_0527 = DAT_EXTMEM_0527 | 0x40;
  FUN_CODE_4b44(0x23);
  DAT_EXTMEM_a311 = 2;
  return;
}


