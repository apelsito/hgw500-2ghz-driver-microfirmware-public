/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a89e, function FUN_CODE_a89e */

void FUN_CODE_a89e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  byte *pbVar8;
  
  if ((DAT_EXTMEM_9ed1 & 1) == 0) {
    FUN_CODE_8276();
  }
  else {
    FUN_CODE_a874();
  }
  if ((DAT_EXTMEM_9e48 & 1) != 0) {
    DAT_EXTMEM_9e4a = 1;
  }
  if (DAT_EXTMEM_9e52 == '\0') {
    bVar5 = 0;
  }
  else {
    FUN_CODE_5bd8(DAT_EXTMEM_9e69 + '\x01');
    FUN_CODE_48bd();
    uVar4 = BANK0_R7;
    uVar3 = BANK0_R6;
    uVar2 = BANK0_R5;
    uVar1 = BANK0_R4;
    sVar7 = 0x562;
    FUN_CODE_5bf2(0x562);
    func_0x085a(0x10);
    BANK0_R3 = uVar4;
    BANK0_R2 = uVar3;
    BANK0_R1 = uVar2;
    BANK0_R0 = uVar1;
    FUN_CODE_48bd();
    uVar4 = BANK0_R7;
    uVar3 = BANK0_R6;
    uVar2 = BANK0_R5;
    uVar1 = BANK0_R4;
    FUN_CODE_5bf2(sVar7 + 1);
    func_0x085a(0x18);
    BANK0_R3 = uVar4;
    BANK0_R2 = uVar3;
    BANK0_R1 = uVar2;
    BANK0_R0 = uVar1;
    FUN_CODE_48bd();
    pbVar8 = &DAT_EXTMEM_9e9d;
    bVar5 = FUN_CODE_ac14();
    *pbVar8 = bVar5 & 0x7f;
    pbVar8 = pbVar8 + 1;
    if ((*pbVar8 & 1) != 0) {
      FUN_CODE_aa5b();
      *pbVar8 = 5;
      FUN_CODE_a94e();
      FUN_CODE_aa1e();
    }
    bVar5 = FUN_CODE_87a7(&UNK_CODE_9e4e);
    if (((bVar5 & 1) != 0) && ((DAT_EXTMEM_013b >> 4 & 1) != 0)) {
      FUN_CODE_7520();
      FUN_CODE_77c4();
    }
    bVar6 = DAT_EXTMEM_a1dd + 1;
    bVar5 = DAT_EXTMEM_a1dd + 0x81;
    DAT_EXTMEM_a1dd = bVar6;
    if (0x7f < bVar6) {
      bVar5 = DAT_EXTMEM_0198 & 0xfe | 1;
      DAT_EXTMEM_0198 = bVar5;
    }
  }
  FUN_CODE_55d8(bVar5,1);
  return;
}


