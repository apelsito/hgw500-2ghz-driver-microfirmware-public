/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:626d, function FUN_CODE_626d */

void FUN_CODE_626d(char param_1,byte param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined2 uStack_2;
  
  cVar2 = EA;
  if (cVar2 != '\0') {
    EA = 0;
  }
  bVar7 = param_3 >> 3;
  pbVar8 = &DAT_EXTMEM_8101;
  DAT_EXTMEM_a59b = param_3;
  DAT_EXTMEM_a59c = param_2;
  FUN_CODE_4889(param_3,0x10,param_3 & 7);
  DAT_EXTMEM_a5a0 = *pbVar8;
  DAT_EXTMEM_a59f = param_2 & 0x7f;
  if (param_1 == '\0') {
    cVar1 = -0x6b - (((0xfe < bVar7) << 7) >> 7);
    uStack_2 = (byte *)CONCAT11(cVar1,bVar7 + 1);
    bVar4 = 1;
    cVar3 = BANK0_R6 + '\x01';
    while (cVar3 = cVar3 + -1, cVar3 != '\0') {
      bVar4 = bVar4 << 1;
    }
    *uStack_2 = ~bVar4 & *(byte *)CONCAT11(cVar1,bVar7 + 1);
    DAT_EXTMEM_a5a0 = DAT_EXTMEM_a5a0 & 0x7f;
  }
  else {
    if (((DAT_EXTMEM_a59f < 0x19) << 7 < '\0') || (0x1b < DAT_EXTMEM_a59f)) {
      DAT_EXTMEM_04cf = 0;
    }
    else {
      DAT_EXTMEM_04cf = 2;
    }
    cVar1 = -0x6b - (((0xfe < bVar7) << 7) >> 7);
    uStack_2 = (byte *)CONCAT11(cVar1,bVar7 + 1);
    bVar4 = 1;
    cVar3 = BANK0_R6 + '\x01';
    while (cVar3 = cVar3 + -1, cVar3 != '\0') {
      bVar4 = bVar4 << 1;
    }
    *uStack_2 = bVar4 | *(byte *)CONCAT11(cVar1,bVar7 + 1);
    pbVar8 = &DAT_EXTMEM_8101;
    FUN_CODE_4889(DAT_EXTMEM_a59b,0x10);
    DAT_EXTMEM_a5a0 = (&DAT_CODE_4445)[DAT_EXTMEM_a59f] << 3 | *pbVar8 & 7 | 0x80;
  }
  if (DAT_EXTMEM_a59b == 0) {
    DAT_EXTMEM_a527 = DAT_EXTMEM_a59c;
    FUN_CODE_77e1(0,0,0);
  }
  puVar9 = (undefined1 *)
           CONCAT11('C' - (((0x6e < DAT_EXTMEM_a59f * '\x02') << 7) >> 7),
                    DAT_EXTMEM_a59f * '\x02' + 0x91);
  uVar5 = *puVar9;
  uVar6 = puVar9[1];
  FUN_CODE_4889(DAT_EXTMEM_a59f,&UNK_CODE_4241,4,0,0);
  FUN_CODE_4879();
  FUN_CODE_4819();
  func_0x0847(1);
  bVar7 = DAT_EXTMEM_a59b;
  puVar9 = (undefined1 *)
           CONCAT11(-0x6a - (((0xed < DAT_EXTMEM_a59b * '\x02') << 7) >> 7),
                    DAT_EXTMEM_a59b * '\x02' + 0x12);
  *puVar9 = uVar5;
  puVar9[1] = uVar6;
  pbVar8 = &DAT_EXTMEM_8100;
  bVar4 = DAT_EXTMEM_a59c;
  FUN_CODE_4889(bVar7,0x10);
  *pbVar8 = bVar4;
  if (bVar7 == 0) {
    DAT_EXTMEM_01c8 = bVar4;
  }
  pbVar8 = &DAT_EXTMEM_8101;
  bVar7 = DAT_EXTMEM_a59b;
  bVar4 = DAT_EXTMEM_a5a0;
  FUN_CODE_4889(0x10,DAT_EXTMEM_a59b);
  *pbVar8 = bVar4;
  pbVar8 = &DAT_EXTMEM_8105;
  FUN_CODE_4889(bVar7,0x10);
  bVar7 = DAT_EXTMEM_a59e | *pbVar8 & 0xfc;
  pbVar8 = &DAT_EXTMEM_8105;
  FUN_CODE_4889(0x10,DAT_EXTMEM_a59b);
  *pbVar8 = bVar7;
  FUN_CODE_7efd(1);
  EA = cVar2 != '\0';
  return;
}


