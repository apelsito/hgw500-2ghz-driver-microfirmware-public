/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:aa6c, function FUN_CODE_aa6c */

char FUN_CODE_aa6c(char param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  char *pcVar13;
  undefined1 *puVar14;
  
  FUN_CODE_5bd9();
  FUN_CODE_48bd();
  uVar5 = BANK0_R7;
  uVar4 = BANK0_R6;
  uVar3 = BANK0_R5;
  uVar2 = BANK0_R4;
  sVar12 = 0x562;
  FUN_CODE_5bf2(0x562);
  func_0x085a(0x10);
  BANK0_R3 = uVar5;
  BANK0_R2 = uVar4;
  BANK0_R1 = uVar3;
  BANK0_R0 = uVar2;
  FUN_CODE_48bd();
  uVar5 = BANK0_R7;
  uVar4 = BANK0_R6;
  uVar3 = BANK0_R5;
  uVar2 = BANK0_R4;
  FUN_CODE_5bf2(sVar12 + 1);
  func_0x085a(0x18);
  BANK0_R3 = uVar5;
  BANK0_R2 = uVar4;
  BANK0_R1 = uVar3;
  BANK0_R0 = uVar2;
  FUN_CODE_48bd();
  func_0x086d(&UNK_CODE_9ea1);
  FUN_CODE_48db(&UNK_CODE_9ea5);
  FUN_CODE_48e7(&UNK_CODE_9ea1);
  cVar11 = '\0';
  FUN_CODE_48ca();
  if (-1 < cVar11) {
    if ((DAT_EXTMEM_9e4d & 1) == 0) {
      FUN_CODE_abe6(&UNK_CODE_9ea5);
      pcVar13 = &DAT_EXTMEM_9eaa;
    }
    else {
      FUN_CODE_abe6(&UNK_CODE_9ea5);
      param_1 = DAT_EXTMEM_9e6f + '\x04' + param_1;
      pcVar13 = &DAT_EXTMEM_9ea9;
    }
    DAT_EXTMEM_a085 = param_1 - *pcVar13;
    if (DAT_EXTMEM_a085 < 0x2d) {
      pcVar13 = (char *)CONCAT11(-0x62 - (((0x8f < DAT_EXTMEM_a085) << 7) >> 7),
                                 DAT_EXTMEM_a085 + 0x70);
      *pcVar13 = *pcVar13 + '\x01';
      DAT_EXTMEM_9e68 = DAT_EXTMEM_9e68 + '\x01';
    }
  }
  cVar11 = ((DAT_EXTMEM_9eac < DAT_EXTMEM_9e68 + 1U) << 7) >> 7;
  cVar8 = DAT_EXTMEM_9eab + cVar11;
  if ((DAT_EXTMEM_9eab < (byte)-cVar11) << 7 < '\0') {
    bVar6 = 0;
    cVar11 = '\0';
    do {
      cVar9 = FUN_CODE_abd4();
      cVar8 = cVar11;
      if (cVar9 + 1U <= bVar6) break;
      cVar11 = cVar11 + '\x01';
      cVar8 = DAT_EXTMEM_a086;
    } while (cVar11 != '-');
    DAT_EXTMEM_a086 = cVar8;
    bVar7 = 0;
    bVar6 = 0;
    do {
      bVar10 = FUN_CODE_abd4();
      bVar1 = DAT_EXTMEM_9eab + (((DAT_EXTMEM_9eac < bVar10) << 7) >> 7) !=
              ((bVar7 < (DAT_EXTMEM_9eac - bVar10) + 1) << 7) >> 7;
      bVar10 = bVar6;
      if (!bVar1) break;
      bVar6 = bVar6 + 1;
      bVar1 = bVar6 < 0x2d;
      bVar10 = DAT_EXTMEM_a087;
    } while (bVar6 != 0x2d);
    DAT_EXTMEM_a087 = bVar10;
    cVar11 = bVar1 << 7;
    DAT_EXTMEM_9e6d = DAT_EXTMEM_a086;
    bVar6 = FUN_CODE_abcc(DAT_EXTMEM_a087,&UNK_CODE_9e6e);
    cVar11 = (bVar6 < 10U - (cVar11 >> 7)) << 7;
    if (cVar11 < '\0') {
      FUN_CODE_abcc(0,&UNK_CODE_9e65);
      DAT_EXTMEM_9e64 = '\n' - (bVar7 - (cVar11 >> 7));
    }
    else {
      DAT_EXTMEM_9e65 = bVar7 - 10;
      DAT_EXTMEM_9e64 = '\0';
    }
    if ((DAT_EXTMEM_9e4d & 1) == 0) {
      pcVar13 = &DAT_EXTMEM_9eaa;
    }
    else {
      pcVar13 = &DAT_EXTMEM_9ea9;
    }
    DAT_EXTMEM_9e6b = (DAT_EXTMEM_9e6e - DAT_EXTMEM_9e6d) + *pcVar13 + '\x01';
    if (DAT_EXTMEM_9e6b < 0x10) {
      DAT_EXTMEM_9e6b = 0x10;
    }
    puVar14 = &DAT_EXTMEM_9e6b;
    DAT_EXTMEM_9e6b = DAT_EXTMEM_9e6b + 2;
    FUN_CODE_aa5b();
    *puVar14 = 3;
    FUN_CODE_a94e();
    cVar8 = FUN_CODE_bbb6(0);
  }
  return cVar8;
}


