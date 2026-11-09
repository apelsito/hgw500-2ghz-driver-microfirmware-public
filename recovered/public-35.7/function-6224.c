/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6224, function FUN_CODE_6224 */

void FUN_CODE_6224(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &DAT_EXTMEM_0604;
  if ((DAT_EXTMEM_9e4e & 1) == 1) {
    DAT_EXTMEM_0604 = DAT_EXTMEM_0604 & 0x7f;
    bVar1 = FUN_CODE_6640(0xc);
    *pbVar2 = bVar1 & 0x7f;
    DAT_EXTMEM_9e4c = 0xc;
  }
  else {
    FUN_CODE_6630(DAT_EXTMEM_0604 | 0x40);
  }
  FUN_CODE_58a7(0,0,0xff);
  return;
}


