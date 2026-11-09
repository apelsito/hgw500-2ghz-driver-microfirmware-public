/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a6c3, function FUN_CODE_a6c3 */

void FUN_CODE_a6c3(void)

{
  FUN_CODE_53ba(0x1f,0x6f);
  DAT_EXTMEM_0527 = DAT_EXTMEM_0527 & 0xbf;
  DAT_EXTMEM_a311 = 4;
  return;
}


