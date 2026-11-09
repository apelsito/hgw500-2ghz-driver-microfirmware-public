/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8761, function FUN_CODE_8761 */

/* WARNING: Instruction at (CODE,0x84a7) overlaps instruction at (CODE,0x84a6)
    */

void FUN_CODE_8761(undefined1 *param_1,undefined1 param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  
  FUN_CODE_87d1(0x12);
  cVar2 = '\x01';
  FUN_CODE_876e();
  FUN_CODE_a847();
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_69 = cVar2;
  DAT_INTMEM_6a = param_3;
  if ((cVar2 != '\x02') && (param_3 == 0)) {
    FUN_CODE_86f8();
    FUN_CODE_850b(0);
    if (DAT_INTMEM_69 == '\x01') {
      bVar3 = FUN_CODE_8706();
      if ((bVar3 & 1) == 0) {
        uVar4 = FUN_CODE_870e(&UNK_CODE_a141);
      }
      else {
        uVar4 = FUN_CODE_48db();
      }
    }
    else {
      FUN_CODE_8512();
      uVar4 = param_2;
    }
    FUN_CODE_850c(uVar4);
    FUN_CODE_8518();
    FUN_CODE_86ff();
  }
  if (DAT_INTMEM_6a == 2) goto LAB_CODE_8505;
  bVar3 = 0;
  if ((DAT_EXTMEM_9f15 >> 1 & 1) == 0) {
    func_0x37ad(9,0x30);
    FUN_CODE_850a(param_3 & 0xf,bVar3 & 0xf0);
    cVar2 = func_0x0879(&UNK_CODE_a145);
    nop();
    if (cVar2 == '\0') {
      nop();
      cVar2 = func_0x0879(&UNK_CODE_a149);
    }
    nop();
    if (cVar2 != '\0') {
      nop();
      goto LAB_CODE_84a2;
    }
    func_0x90a1();
    uVar4 = *param_1;
code_c0x84a6:
    FUN_CODE_8512(uVar4);
    FUN_CODE_48e7(&UNK_CODE_a145);
    FUN_CODE_48bd();
    FUN_CODE_850c();
  }
  else {
    func_0x37ad(0x30);
    FUN_CODE_850a(0);
    func_0x0879(&UNK_CODE_a145);
    nop();
    *param_1 = 0;
    nop();
    func_0x0879(&UNK_CODE_a149);
    nop();
    nop();
    nop();
LAB_CODE_84a2:
    uVar4 = 0;
    if (DAT_INTMEM_6a == 0) goto code_c0x84a6;
    FUN_CODE_8512();
    FUN_CODE_48e7(&UNK_CODE_a149);
    FUN_CODE_48bd();
    FUN_CODE_850c();
    FUN_CODE_86f8();
    func_0x086d(param_2,&UNK_CODE_a145,0);
    if (DAT_EXTMEM_9ef7 == '\0') {
      bVar3 = FUN_CODE_8706();
      if ((bVar3 & 1) == 0) {
        param_2 = FUN_CODE_870e(&UNK_CODE_a145);
      }
      else {
        param_2 = FUN_CODE_48db();
      }
    }
    else {
      FUN_CODE_48db(&UNK_CODE_a145);
    }
    func_0x086d(param_2,&UNK_CODE_a145);
    FUN_CODE_851b(&UNK_CODE_a145);
    FUN_CODE_86ff();
  }
  FUN_CODE_8518();
  func_0x38a4(9,0x30);
LAB_CODE_8505:
  EA = cVar1 != '\0';
  return;
}


