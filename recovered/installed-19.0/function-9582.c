/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9582, function FUN_CODE_9582 */

void FUN_CODE_9582(byte *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_1;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5ee = '\x01';
  DAT_EXTMEM_a5ef = '\b';
  DAT_EXTMEM_a5ed = bVar2;
  FUN_CODE_9796(0,0);
  DAT_EXTMEM_0425 = DAT_EXTMEM_a5ed;
  if (DAT_EXTMEM_a5ee != '\0') {
    pbVar3 = (byte *)CONCAT11(-4 - (((0xde < bVar2) << 7) >> 7),bVar2 + 0x21);
    *pbVar3 = *pbVar3 | 0x80;
  }
  pbVar3 = (byte *)CONCAT11(-4 - (((0xdf < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x20);
  *pbVar3 = *pbVar3 & 0xc0;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xde < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x21);
  *pbVar3 = *pbVar3 & 0xc0;
  *(byte *)CONCAT11(-4 - (((0xed < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x12) =
       *(byte *)CONCAT11(-4 - (((0xed < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x12) & 1 | 2 |
       DAT_EXTMEM_a5ef * '\x04';
  *(undefined1 *)CONCAT11(-4 - (((0xee < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x11) = 0xff;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xd6 < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x29);
  *pbVar3 = *pbVar3 & 0xf7;
  EA = cVar1 != '\0';
  return;
}


