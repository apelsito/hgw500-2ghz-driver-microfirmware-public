/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6c60, function FUN_CODE_6c60 */

void FUN_CODE_6c60(undefined1 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  DAT_EXTMEM_a08a = 4;
  uVar1 = BANK0_R7;
  DAT_EXTMEM_a08b = FUN_CODE_9b2b(param_1,0x12,BANK0_R7);
  bVar2 = FUN_CODE_6c1c(param_1,0x12);
  DAT_EXTMEM_a089 = bVar2 >> 4;
  pbVar5 = &DAT_EXTMEM_a089;
  FUN_CODE_6eed(uVar1,0x10);
  DAT_EXTMEM_a087 = *pbVar5 & 3;
  DAT_EXTMEM_a088 = FUN_CODE_6f33(uVar1,0x12);
  pbVar5 = &DAT_EXTMEM_a088;
  FUN_CODE_6f03(uVar1,0x12);
  DAT_EXTMEM_a085 = *pbVar5 & 0x7f;
  pbVar5 = &DAT_EXTMEM_a086;
  DAT_EXTMEM_a086 = DAT_EXTMEM_a085;
  FUN_CODE_bc72();
  if (*pbVar5 < 3) {
    DAT_EXTMEM_a08a = 2;
  }
  else if (0xe < *pbVar5) {
    DAT_EXTMEM_a08a = 5;
  }
  DAT_EXTMEM_a089 = DAT_EXTMEM_a089 + 1;
  if (DAT_EXTMEM_a08a <= DAT_EXTMEM_a089) {
    DAT_EXTMEM_a089 = 0;
    puVar6 = &DAT_EXTMEM_a08b;
    uVar3 = DAT_EXTMEM_a08b;
    FUN_CODE_9b20(uVar1,0x12);
    *puVar6 = uVar3;
    puVar6 = &DAT_EXTMEM_4139;
    uVar3 = (&DAT_CODE_4139)[DAT_EXTMEM_a086];
    FUN_CODE_991f(uVar1,0x12);
    *puVar6 = uVar3;
  }
  pbVar5 = &DAT_EXTMEM_a089;
  bVar2 = DAT_EXTMEM_a089 << 4;
  bVar4 = FUN_CODE_6c1c(uVar1,0x12);
  *pbVar5 = bVar4 & 0xf | bVar2;
  FUN_CODE_6c5a(uVar1,0x12);
  bVar2 = (*pbVar5 & 0xc0) >> 4;
  bVar4 = FUN_CODE_4b44(uVar1,0x12);
  *pbVar5 = bVar4 & 0xf3 | bVar2;
  FUN_CODE_6f03(uVar1,0x12);
  FUN_CODE_6c5a(uVar1,0x12,*pbVar5);
  DAT_EXTMEM_a171 = FUN_CODE_66a2();
  FUN_CODE_6a02(0,BANK0_R6,BANK0_R5);
  return;
}


