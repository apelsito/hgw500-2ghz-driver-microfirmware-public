/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:71c1, function FUN_CODE_71c1 */

void FUN_CODE_71c1(byte param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  char *pcVar8;
  undefined1 *puVar9;
  
  DAT_EXTMEM_a1d2 = DAT_EXTMEM_01cc & 0xf;
  while( true ) {
    if (DAT_EXTMEM_a1d2 == 0) {
      return;
    }
    if (((DAT_EXTMEM_9d9a == '\0') && (DAT_EXTMEM_9d9b == '\t')) || (DAT_EXTMEM_9d9b == BANK0_R7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    bVar4 = DAT_EXTMEM_a1d2;
    bVar3 = FUN_CODE_77e4(DAT_EXTMEM_a1ba);
    while (param_2 = param_2 + -1, param_2 != '\0') {
      bVar3 = bVar3 << 1;
    }
    if ((bVar3 & bVar4) == 0) {
      DAT_EXTMEM_01c0 = DAT_EXTMEM_01c0 | 2;
      FUN_CODE_72d1(DAT_EXTMEM_a1ba | 0x80,0x8a);
      puVar9 = &DAT_EXTMEM_01d0;
      FUN_CODE_48f3();
      DAT_EXTMEM_01c3 = *puVar9;
      return;
    }
    for (DAT_EXTMEM_a1d3 = 0; DAT_EXTMEM_a1d3 < 4; DAT_EXTMEM_a1d3 = DAT_EXTMEM_a1d3 + 1) {
      bVar3 = DAT_EXTMEM_a1d3;
      bVar4 = FUN_CODE_72d2(DAT_EXTMEM_a1d3 - 4);
      bVar5 = (byte)((ushort)bVar4 * (ushort)param_1);
      bVar4 = (byte)((ushort)bVar4 * (ushort)param_1 >> 8);
      cVar2 = '\0';
      cVar6 = bVar3 + bVar5;
      FUN_CODE_72da(0xd0,bVar4 - ((CARRY1(bVar3,bVar5) << 7) >> 7),cVar6);
      FUN_CODE_48f3();
      FUN_CODE_4eda();
      bVar5 = FUN_CODE_72d1(cVar6);
      bVar7 = (byte)((ushort)bVar5 * (ushort)bVar4);
      param_1 = (byte)((ushort)bVar5 * (ushort)bVar4 >> 8);
      cVar6 = bVar7 + bVar3;
      FUN_CODE_72da(0xf0,cVar2 + (param_1 - ((CARRY1(bVar7,bVar3) << 7) >> 7)));
      pcVar8 = &DAT_EXTMEM_9d4e;
      FUN_CODE_48f3();
      FUN_CODE_4eda();
      *pcVar8 = cVar6;
    }
    bVar3 = 1;
    cVar2 = BANK0_R6 + '\x01';
    while (cVar2 = cVar2 + -1, cVar2 != '\0') {
      bVar3 = bVar3 << 1;
    }
    DAT_EXTMEM_a1d2 = ~bVar3 & DAT_EXTMEM_a1d2;
    DAT_EXTMEM_01cc = 1;
    param_2 = BANK0_R7 + '\x01';
    while (param_2 = param_2 + -1, param_2 != '\0') {
      DAT_EXTMEM_01cc = DAT_EXTMEM_01cc << 1;
    }
    bVar3 = DAT_EXTMEM_a1ba;
    DAT_EXTMEM_a1ba = DAT_EXTMEM_a1ba + 1 & 3;
    cVar2 = FUN_CODE_b398(&UNK_CODE_9d9b);
    if (cVar2 == '\n') {
      bVar3 = 1;
    }
    if (bVar3 != 0) {
      DAT_EXTMEM_9d9b = '\0';
    }
  }
  DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 1;
  return;
}


