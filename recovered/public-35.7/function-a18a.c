/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a18a, function FUN_CODE_a18a */

void FUN_CODE_a18a(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_EXTMEM_8100;
  bVar1 = DAT_EXTMEM_8100 & 0xf;
  bVar2 = FUN_CODE_a17e(BANK0_R7,DAT_EXTMEM_a17d,DAT_EXTMEM_a17e);
  *pbVar3 = bVar2 | 1;
  bVar2 = FUN_CODE_a17e();
  *pbVar3 = bVar2 & 0xfb;
  FUN_CODE_a070();
  *pbVar3 = *pbVar3 | 0xfa;
  FUN_CODE_a4ba();
  *pbVar3 = *pbVar3 | 0x1f;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xf9 < BANK0_R7) << 7) >> 7),BANK0_R7 + 6);
  *pbVar3 = *pbVar3 | 0xe;
  DAT_EXTMEM_04a7 = 0;
  DAT_EXTMEM_04a6 = 0;
  DAT_EXTMEM_04a5 = 0xff;
  pbVar3 = &DAT_EXTMEM_04a4;
  DAT_EXTMEM_04a4 = 0xfd;
  FUN_CODE_a1f0(BANK0_R7 + 0x14);
  bVar1 = *pbVar3 & 0xc0 | bVar1;
  FUN_CODE_a1ed();
  *pbVar3 = bVar1;
  return;
}


