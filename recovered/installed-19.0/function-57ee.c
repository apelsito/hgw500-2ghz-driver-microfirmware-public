/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:57ee, function FUN_CODE_57ee */

void FUN_CODE_57ee(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  
  FUN_CODE_53ba(0xff);
  DAT_EXTMEM_a600 = 0;
  DAT_EXTMEM_a601 = 0;
  do {
    if ((((DAT_EXTMEM_05f8 == '\0') && (DAT_EXTMEM_05f9 == '\0')) && (DAT_EXTMEM_05fa == '\0')) &&
       (DAT_EXTMEM_05fb == '\0')) {
      return;
    }
    if ((DAT_EXTMEM_a3c1 >> 6 & 1) == 0) {
      bVar1 = 3 - (((DAT_EXTMEM_a601 < 0xe9) << 7) >> 7);
      cVar2 = -bVar1;
      if (bVar1 <= DAT_EXTMEM_a600) {
LAB_CODE_583e:
        DAT_EXTMEM_01c0 = DAT_EXTMEM_01c0 | 0x20;
        return;
      }
      uVar3 = 0x32;
    }
    else {
      cVar2 = ((DAT_EXTMEM_a601 < 4) << 7) >> 7;
      if ((byte)-cVar2 <= DAT_EXTMEM_a600) goto LAB_CODE_583e;
      uVar3 = 1;
    }
    func_0x3e87(DAT_EXTMEM_a600 + cVar2,0,uVar3);
    func_0x08d6(0,0xa600,1);
  } while( true );
}


