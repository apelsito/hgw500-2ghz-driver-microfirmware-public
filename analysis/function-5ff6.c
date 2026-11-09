/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */
/* CODE:5ff6 FUN_CODE_5ff6 */

undefined1 FUN_CODE_5ff6(undefined1 param_1)

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
  FUN_CODE_4bf8();
  if (BANK2_R4 < '\0') {
    FUN_CODE_4fce();
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


