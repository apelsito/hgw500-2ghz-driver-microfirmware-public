/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:ac1c, function FUN_CODE_ac1c */

void FUN_CODE_ac1c(char param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  byte *pbVar8;
  
  DAT_INTMEM_63 = '\0';
  if (DAT_EXTMEM_9e52 == '\0') {
    DAT_INTMEM_63 = 0;
    return;
  }
  cVar5 = FUN_CODE_72ff();
  if (cVar5 == '\x01') {
    FUN_CODE_5bd9();
    FUN_CODE_48bd();
    uVar4 = BANK0_R7;
    uVar3 = BANK0_R6;
    uVar2 = BANK0_R5;
    uVar1 = BANK0_R4;
    sVar7 = 0x562;
    FUN_CODE_5bf2();
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
    pbVar8 = (byte *)(sVar7 + 1);
    FUN_CODE_5bf2();
    func_0x085a(0x18);
    BANK0_R3 = uVar4;
    BANK0_R2 = uVar3;
    BANK0_R1 = uVar2;
    BANK0_R0 = uVar1;
    bVar6 = FUN_CODE_ac0e();
    *pbVar8 = bVar6 | 0x80;
    cVar5 = FUN_CODE_bd93();
    if ((cVar5 == '\0') || (bVar6 = FUN_CODE_65f4(DAT_EXTMEM_9e4e), (bVar6 & 1) != 1)) {
      DAT_INTMEM_63 = '\x01';
    }
    if ((DAT_EXTMEM_9e48 & 1) != 0) {
      if (DAT_EXTMEM_9e4c == '\x02') {
        DAT_INTMEM_63 = '\0';
      }
      FUN_CODE_6678();
      if (param_1 == '\0') {
        DAT_INTMEM_63 = '\0';
      }
    }
    if (DAT_INTMEM_63 != '\0') {
      FUN_CODE_80da();
    }
    return;
  }
  return;
}


