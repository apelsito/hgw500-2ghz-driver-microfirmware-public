/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9588, function FUN_CODE_9588 */

void FUN_CODE_9588(char param_1,char param_2,byte param_3)

{
  char cVar1;
  byte *pbVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5ed = param_3;
  DAT_EXTMEM_a5ee = param_2;
  DAT_EXTMEM_a5ef = param_1;
  FUN_CODE_9796(0,0);
  DAT_EXTMEM_0425 = DAT_EXTMEM_a5ed;
  if (DAT_EXTMEM_a5ee != '\0') {
    pbVar2 = (byte *)CONCAT11(-4 - (((0xde < param_3) << 7) >> 7),param_3 + 0x21);
    *pbVar2 = *pbVar2 | 0x80;
  }
  pbVar2 = (byte *)CONCAT11(-4 - (((0xdf < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x20);
  *pbVar2 = *pbVar2 & 0xc0;
  pbVar2 = (byte *)CONCAT11(-4 - (((0xde < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x21);
  *pbVar2 = *pbVar2 & 0xc0;
  *(byte *)CONCAT11(-4 - (((0xed < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x12) =
       *(byte *)CONCAT11(-4 - (((0xed < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x12) & 1 | 2 |
       DAT_EXTMEM_a5ef * '\x04';
  *(undefined1 *)CONCAT11(-4 - (((0xee < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x11) = 0xff;
  pbVar2 = (byte *)CONCAT11(-4 - (((0xd6 < BANK0_R5) << 7) >> 7),BANK0_R5 + 0x29);
  *pbVar2 = *pbVar2 & 0xf7;
  EA = cVar1 != '\0';
  return;
}


