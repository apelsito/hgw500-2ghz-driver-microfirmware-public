/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:63ec, function FUN_CODE_63ec */

void FUN_CODE_63ec(void)

{
  byte bVar1;
  
  DAT_EXTMEM_071f = DAT_EXTMEM_071f & 0x7f;
  DAT_EXTMEM_a4f7 = DAT_EXTMEM_071c & 1;
  if ((DAT_EXTMEM_a4f7 != 0) && (DAT_EXTMEM_a450 != '\0')) {
    bVar1 = DAT_EXTMEM_a44d & 3;
    if (bVar1 == 1) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 6;
    }
    else if (bVar1 == 2) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 0xe;
    }
    else if (bVar1 == 0) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 2;
    }
  }
  DAT_EXTMEM_a450 = 0;
  DAT_EXTMEM_a4f5 = 2;
  DAT_EXTMEM_a503 = 1;
  FUN_CODE_67de(0xf5,0xa4,1);
  FUN_CODE_5f71(4);
  return;
}


