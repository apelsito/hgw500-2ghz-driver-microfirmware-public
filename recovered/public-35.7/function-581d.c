/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:581d, function FUN_CODE_581d */

void FUN_CODE_581d(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  
  FUN_CODE_58a7(0xff,0);
  DAT_EXTMEM_a1c4 = FUN_CODE_a734(0,0xa1c2);
  FUN_CODE_58a7(0x47,0xff,0);
  do {
    if ((((DAT_EXTMEM_05f8 == '\0') && (DAT_EXTMEM_05f9 == '\0')) && (DAT_EXTMEM_05fa == '\0')) &&
       (DAT_EXTMEM_05fb == '\0')) {
      FUN_CODE_58a7(0x48,DAT_EXTMEM_a1c4,0);
      return;
    }
    bVar3 = FUN_CODE_669f();
    if ((bVar3 & 1) == 0) {
      bVar3 = 3 - (((DAT_EXTMEM_a1c3 < 0xe9) << 7) >> 7);
      cVar4 = DAT_EXTMEM_a1c2 - bVar3;
      if (bVar3 <= DAT_EXTMEM_a1c2) {
        FUN_CODE_bcd9(cVar4);
        uVar2 = 0x5b;
        goto LAB_CODE_588a;
      }
      uVar2 = 0x32;
    }
    else {
      cVar1 = ((DAT_EXTMEM_a1c3 < 4) << 7) >> 7;
      cVar4 = DAT_EXTMEM_a1c2 + cVar1;
      if ((byte)-cVar1 <= DAT_EXTMEM_a1c2) {
        FUN_CODE_bcd9();
        uVar2 = 0x5a;
LAB_CODE_588a:
        FUN_CODE_7bf8(uVar2);
        return;
      }
      uVar2 = 1;
    }
    func_0x3e87(cVar4,0,uVar2);
    FUN_CODE_5816(0xa1c2);
  } while( true );
}


