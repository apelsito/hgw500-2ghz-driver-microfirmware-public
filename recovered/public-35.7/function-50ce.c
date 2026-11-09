/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50ce, function FUN_CODE_50ce */

void FUN_CODE_50ce(void)

{
  byte bVar1;
  
  bVar1 = 0x54;
  FUN_CODE_500f();
  BANK2_R1 = BANK1_R5 & bVar1;
  bVar1 = 0x55;
  FUN_CODE_500f();
  BANK2_R2 = BANK1_R6 & bVar1;
  bVar1 = 0x56;
  FUN_CODE_500f();
  BANK2_R3 = BANK1_R7 & bVar1;
  bVar1 = 0x57;
  FUN_CODE_500f();
  BANK2_R4 = BANK2_R0 & bVar1;
  FUN_CODE_50a0(BANK2_R1,0x54);
  FUN_CODE_50a0(BANK2_R2,0x55);
  FUN_CODE_50a0(BANK2_R3,0x56);
  FUN_CODE_50a0(BANK2_R4,0x57);
  bVar1 = DAT_SFR_91;
  DAT_SFR_91 = bVar1 & 0xef;
  return;
}


