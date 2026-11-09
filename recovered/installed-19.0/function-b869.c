/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b869, function FUN_CODE_b869 */

void FUN_CODE_b869(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar1 = DAT_EXTMEM_a5b0;
  bVar2 = DAT_EXTMEM_8100 & 0xf;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xf2 < BANK0_R7) << 7) >> 7),BANK0_R7 + 0xd);
  *pbVar3 = *pbVar3 | 1;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xf2 < BANK0_R7) << 7) >> 7),BANK0_R7 + 0xd);
  *pbVar3 = *pbVar3 & 0xfb;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xed < BANK0_R7) << 7) >> 7),BANK0_R7 + 0x12);
  *pbVar3 = *pbVar3 | 0xfa;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xee < BANK0_R7) << 7) >> 7),BANK0_R7 + 0x11);
  *pbVar3 = *pbVar3 | 0x1f;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xf9 < BANK0_R7) << 7) >> 7),BANK0_R7 + 6);
  *pbVar3 = *pbVar3 | 0xe;
  DAT_EXTMEM_04a7 = 0;
  DAT_EXTMEM_04a6 = 0;
  DAT_EXTMEM_04a5 = 0xff;
  DAT_EXTMEM_04a4 = 0xfd;
  *(byte *)CONCAT11(-4 - (((0xeb < bVar1) << 7) >> 7),bVar1 + 0x14) =
       *(byte *)CONCAT11(-4 - (((0xeb < BANK0_R7) << 7) >> 7),BANK0_R7 + 0x14) & 0xc0 | bVar2;
  return;
}


