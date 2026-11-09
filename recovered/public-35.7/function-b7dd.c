/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b7dd, function FUN_CODE_b7dd */

void FUN_CODE_b7dd(byte param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  cVar3 = '@';
  cVar2 = -0x6a;
  if (param_2 == '\0') {
    param_1 = param_1 & 0x7f;
    cVar5 = param_1 - 0x14;
    if ((0x13 < param_1) && (cVar5 = param_1 - 0x1c, param_1 < 0x1c)) {
      bVar4 = (byte)((ushort)param_1 * 8);
      cVar2 = bVar4 + 0xb6;
      cVar3 = ((char)((ushort)param_1 * 8 >> 8) - (((0x49 < bVar4) << 7) >> 7)) + '?';
      cVar5 = cVar3;
    }
    FUN_CODE_b7b1(cVar5,cVar2,cVar3,0xff);
  }
  EA = cVar1 != '\0';
  return;
}


