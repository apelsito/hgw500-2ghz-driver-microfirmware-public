/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:67de, function FUN_CODE_67de */

void FUN_CODE_67de(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (((DAT_EXTMEM_a288 == '\0') && (DAT_EXTMEM_a289 == 9)) || (DAT_EXTMEM_a289 == BANK0_R7)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 2;
  }
  else {
    bVar3 = (byte)((ushort)DAT_EXTMEM_a289 * 0xf);
    func_0x0663(BANK0_R1,bVar3 - 0xe,
                ((char)((ushort)DAT_EXTMEM_a289 * 0xf >> 8) - (((0xd < bVar3) << 7) >> 7)) + -0x5f,1
                ,0,0xf);
    DAT_EXTMEM_a289 = DAT_EXTMEM_a289 + 1;
    if (DAT_EXTMEM_a289 == 10) {
      DAT_EXTMEM_a289 = 0;
    }
  }
  EA = cVar1 != '\0';
  return;
}


