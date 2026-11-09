/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b1a7, function FUN_CODE_b1a7 */

void FUN_CODE_b1a7(void)

{
  byte bVar1;
  
  bVar1 = DAT_EXTMEM_01cf;
  DAT_EXTMEM_a4f5 = DAT_EXTMEM_01cf;
  if ((DAT_EXTMEM_01cf & 1) != 0) {
    DAT_EXTMEM_01cf = DAT_EXTMEM_01cf & 0xfe;
  }
  if ((bVar1 >> 5 & 1) != 0) {
    DAT_EXTMEM_01cf = DAT_EXTMEM_01cf & 0xdf;
    DAT_EXTMEM_0134 = 0x20;
    IE = 0;
    HIFLG = 0;
    FUN_CODE_4f1d(0);
    FUN_CODE_4bde(bEXTMEM0003 & 0xfb,3);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}


