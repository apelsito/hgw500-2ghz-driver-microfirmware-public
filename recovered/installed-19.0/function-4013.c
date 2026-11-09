/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4013, function thunk_FUN_CODE_6039 */

undefined1 thunk_FUN_CODE_6039(undefined1 param_1)

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
  FUN_CODE_b141();
  if ((BANK3_R1 >> 1 & 1) != 0) {
    FUN_CODE_644c();
  }
  if ((BANK3_R1 >> 4 & 1) != 0) {
    FUN_CODE_662b();
  }
  if ((BANK3_R1 >> 5 & 1) != 0) {
    FUN_CODE_b1a7();
  }
  if ((BANK3_R1 >> 6 & 1) != 0) {
    FUN_CODE_67c2();
  }
  if ((BANK3_R3 & 1) != 0) {
    FUN_CODE_6633();
  }
  if ((BANK3_R3 >> 1 & 1) != 0) {
    FUN_CODE_9f19();
  }
  if ((BANK3_R3 >> 2 & 1) != 0) {
    FUN_CODE_a2c6();
  }
  if ((BANK3_R3 >> 3 & 1) != 0) {
    FUN_CODE_b1e3();
  }
  if ((BANK3_R3 >> 4 & 1) != 0) {
    FUN_CODE_b20c();
  }
  if ((BANK3_R3 >> 5 & 1) != 0) {
    FUN_CODE_666d();
  }
  if ((BANK3_R3 >> 6 & 1) != 0) {
    FUN_CODE_b23b();
  }
  if ((BANK3_R4 >> 1 & 1) != 0) {
    FUN_CODE_66a9();
  }
  if ((BANK3_R4 >> 4 & 1) != 0) {
    FUN_CODE_64d1();
  }
  if ((BANK3_R4 >> 5 & 1) != 0) {
    FUN_CODE_60e3();
  }
  if ((BANK3_R4 >> 6 & 1) != 0) {
    FUN_CODE_63ec();
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


