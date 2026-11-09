/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:840e, function FUN_CODE_840e */

/* WARNING: Instruction at (CODE,0x84a7) overlaps instruction at (CODE,0x84a6)
    */

void FUN_CODE_840e(char *param_1,undefined1 *param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  
  DAT_INTMEM_69 = *param_1;
  bVar5 = param_1[1];
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_6a = bVar5;
  if ((DAT_INTMEM_69 != '\x02') && (bVar5 == 0)) {
    FUN_CODE_86f8();
    FUN_CODE_850b(0);
    if (DAT_INTMEM_69 == '\x01') {
      bVar2 = FUN_CODE_8706();
      if ((bVar2 & 1) == 0) {
        uVar3 = FUN_CODE_870e(&UNK_CODE_a141);
      }
      else {
        uVar3 = FUN_CODE_48db();
      }
    }
    else {
      FUN_CODE_8512();
      uVar3 = param_3;
    }
    FUN_CODE_850c(uVar3);
    FUN_CODE_8518();
    FUN_CODE_86ff();
  }
  if (DAT_INTMEM_6a == 2) goto LAB_CODE_8505;
  bVar2 = 0;
  if ((DAT_EXTMEM_9f15 >> 1 & 1) == 0) {
    func_0x37ad(9,0x30);
    FUN_CODE_850a(bVar5 & 0xf,bVar2 & 0xf0);
    cVar4 = func_0x0879(&UNK_CODE_a145);
    nop();
    if (cVar4 == '\0') {
      nop();
      cVar4 = func_0x0879(&UNK_CODE_a149);
    }
    nop();
    if (cVar4 != '\0') {
      nop();
      goto LAB_CODE_84a2;
    }
    func_0x90a1();
    uVar3 = *param_2;
code_c0x84a6:
    FUN_CODE_8512(uVar3);
    FUN_CODE_48e7(&UNK_CODE_a145);
    FUN_CODE_48bd();
    FUN_CODE_850c();
  }
  else {
    func_0x37ad(0x30);
    FUN_CODE_850a(0);
    func_0x0879(&UNK_CODE_a145);
    nop();
    *param_2 = 0;
    nop();
    func_0x0879(&UNK_CODE_a149);
    nop();
    nop();
    nop();
LAB_CODE_84a2:
    uVar3 = 0;
    if (DAT_INTMEM_6a == 0) goto code_c0x84a6;
    FUN_CODE_8512();
    FUN_CODE_48e7(&UNK_CODE_a149);
    FUN_CODE_48bd();
    FUN_CODE_850c();
    FUN_CODE_86f8();
    func_0x086d(param_3,&UNK_CODE_a145,0);
    if (DAT_EXTMEM_9ef7 == '\0') {
      bVar5 = FUN_CODE_8706();
      if ((bVar5 & 1) == 0) {
        param_3 = FUN_CODE_870e(&UNK_CODE_a145);
      }
      else {
        param_3 = FUN_CODE_48db();
      }
    }
    else {
      FUN_CODE_48db(&UNK_CODE_a145);
    }
    func_0x086d(param_3,&UNK_CODE_a145);
    FUN_CODE_851b(&UNK_CODE_a145);
    FUN_CODE_86ff();
  }
  FUN_CODE_8518();
  func_0x38a4(9,0x30);
LAB_CODE_8505:
  EA = cVar1 != '\0';
  return;
}


