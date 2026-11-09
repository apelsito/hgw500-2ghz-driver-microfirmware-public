/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:527e, function FUN_CODE_527e */

void FUN_CODE_527e(void)

{
  if ((DAT_EXTMEM_a314 & 1) == 1) {
    FUN_CODE_52f8();
    DAT_EXTMEM_0527 = DAT_EXTMEM_0527 & 0x7f;
    DAT_EXTMEM_a312 = 0xc;
  }
  else {
    DAT_EXTMEM_0604 = DAT_EXTMEM_0604 | 0x40;
    FUN_CODE_5300(4,1);
  }
  FUN_CODE_53ba(0,0);
  return;
}


