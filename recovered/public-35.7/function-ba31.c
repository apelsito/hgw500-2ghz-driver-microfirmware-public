/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:ba31, function FUN_CODE_ba31 */

undefined1 FUN_CODE_ba31(void)

{
  FUN_CODE_58a7(0x6f,0xff);
  DAT_EXTMEM_0527 = DAT_EXTMEM_0527 & 0xbf;
  return 4;
}


