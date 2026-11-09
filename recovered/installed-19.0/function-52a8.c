/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:52a8, function FUN_CODE_52a8 */

void FUN_CODE_52a8(void)

{
  if ((DAT_EXTMEM_a314 >> 1 & 1) == 1) {
    DAT_EXTMEM_0604 = DAT_EXTMEM_0604 | 0xc0;
    FUN_CODE_5300(4,1);
    DAT_EXTMEM_0527 = DAT_EXTMEM_0527 | 0x80;
    DAT_EXTMEM_a312 = 4;
  }
  else {
    FUN_CODE_52fc();
  }
  FUN_CODE_53ba(0,0);
  return;
}


