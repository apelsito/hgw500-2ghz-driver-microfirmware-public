/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a078, function FUN_CODE_a078 */

void FUN_CODE_a078(char param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a19c = param_3;
  DAT_EXTMEM_a19d = param_2;
  DAT_EXTMEM_a19e = param_1;
  FUN_CODE_a71c(0,0);
  DAT_EXTMEM_0425 = DAT_EXTMEM_a19c;
  pbVar3 = &DAT_EXTMEM_a19d;
  if (DAT_EXTMEM_a19d != '\0') {
    bVar2 = FUN_CODE_a204(0,BANK0_R7);
    *pbVar3 = bVar2 | 0x80;
  }
  pbVar3 = (byte *)CONCAT11(-4 - (((0xdf < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x20);
  *pbVar3 = *pbVar3 & 0xc0;
  bVar2 = FUN_CODE_a204();
  *pbVar3 = bVar2 & 0xc0;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xe7 < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x18);
  *pbVar3 = DAT_EXTMEM_a19f;
  FUN_CODE_a06d();
  bVar2 = *pbVar3;
  if ((bVar2 >> 1 & 1) != 1) {
    pbVar3 = &DAT_EXTMEM_a19e;
    bVar2 = bVar2 & 1 | 2 | DAT_EXTMEM_a19e * '\x04';
    FUN_CODE_a06d();
    *pbVar3 = bVar2;
  }
  bVar2 = BANK0_R5;
  FUN_CODE_a4ba(BANK0_R5 + 0x11);
  *pbVar3 = 0xff;
  bVar2 = FUN_CODE_a4d8(bVar2 + 0x29);
  *pbVar3 = bVar2 & 0xf7;
  pbVar3 = &UNK_CODE_9eb6;
  if ((DAT_EXTMEM_9eb6 & 1) == 0) {
    bVar2 = FUN_CODE_a1f8();
    *pbVar3 = bVar2 & 0x7f;
  }
  else {
    bVar2 = FUN_CODE_a1f8();
    *pbVar3 = bVar2 | 0x80;
    DAT_EXTMEM_0512 = 0;
  }
  EA = cVar1 != '\0';
  return;
}


