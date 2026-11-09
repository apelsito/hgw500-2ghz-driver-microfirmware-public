/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */
/* CODE:702c FUN_CODE_702c */

undefined1 FUN_CODE_702c(undefined1 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  uVar8 = BANK0_R7;
  uVar7 = BANK0_R6;
  uVar6 = BANK0_R5;
  uVar5 = BANK0_R4;
  uVar4 = BANK0_R3;
  uVar3 = BANK0_R2;
  uVar2 = BANK0_R1;
  uVar1 = BANK0_R0;
  FUN_CODE_b4b7();
  if ((BANK3_R1 >> 1 & 1) != 0) {
    FUN_CODE_7138();
  }
  if ((BANK3_R1 >> 4 & 1) != 0) {
    FUN_CODE_71ba();
  }
  if ((BANK3_R1 >> 5 & 1) != 0) {
    FUN_CODE_b51d();
  }
  if ((BANK3_R1 >> 6 & 1) != 0) {
    FUN_CODE_b559();
  }
  if ((BANK3_R3 & 1) != 0) {
    FUN_CODE_aca1();
  }
  if ((BANK3_R3 >> 1 & 1) != 0) {
    FUN_CODE_a89e();
  }
  if ((BANK3_R3 >> 2 & 1) != 0) {
    FUN_CODE_b566();
  }
  if ((BANK3_R3 >> 3 & 1) != 0) {
    FUN_CODE_72ec();
  }
  if ((BANK3_R3 >> 4 & 1) != 0) {
    FUN_CODE_7305();
  }
  if ((BANK3_R3 >> 5 & 1) != 0) {
    FUN_CODE_7362();
  }
  if ((BANK3_R3 >> 6 & 1) != 0) {
    FUN_CODE_734a();
  }
  if ((BANK3_R4 >> 1 & 1) != 0) {
    FUN_CODE_8202();
  }
  if ((BANK3_R4 >> 4 & 1) != 0) {
    FUN_CODE_b589();
  }
  if ((BANK3_R4 >> 5 & 1) != 0) {
    thunk_FUN_CODE_6ade();
  }
  if ((BANK3_R4 >> 6 & 1) != 0) {
    FUN_CODE_70d7();
  }
  BANK0_R7 = uVar8;
  BANK0_R6 = uVar7;
  BANK0_R5 = uVar6;
  BANK0_R4 = uVar5;
  BANK0_R3 = uVar4;
  BANK0_R2 = uVar3;
  BANK0_R1 = uVar2;
  BANK0_R0 = uVar1;
  return param_1;
}


