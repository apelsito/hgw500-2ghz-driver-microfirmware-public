/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4797, function FUN_CODE_4797 */

byte FUN_CODE_4797(byte param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (2 < param_1) {
    return param_1 - 3;
  }
  pbVar2 = (byte *)((param_1 << 1 | param_1 >> 7) + 0x81);
  EA = 0;
  bVar3 = *pbVar2;
  if (((bVar3 >> 5 & 1) != 0) && ((bVar3 & 1) != 0)) {
    bVar3 = bVar3 | 0x10;
  }
  bVar1 = *pbVar2;
  *pbVar2 = bVar3 | 4;
  EA = 1;
  return bVar1;
}


