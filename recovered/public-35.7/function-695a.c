/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:695a, function FUN_CODE_695a */

void FUN_CODE_695a(byte *param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (param_2 != '\0') {
    puVar4 = &DAT_EXTMEM_8d01;
    uVar2 = FUN_CODE_69be(param_3,10);
    *puVar4 = uVar2;
    puVar4 = &DAT_EXTMEM_8d03;
    uVar2 = FUN_CODE_69be(param_3,10);
    *puVar4 = uVar2;
    puVar4 = &DAT_EXTMEM_8d05;
    uVar2 = FUN_CODE_69be(param_3,10);
    *puVar4 = uVar2;
    puVar4 = &DAT_EXTMEM_8d07;
    uVar2 = FUN_CODE_69be(param_3,10);
    *puVar4 = uVar2;
    param_1 = &DAT_EXTMEM_8d09;
    bVar3 = FUN_CODE_69be(param_3,10);
    *param_1 = bVar3;
    FUN_CODE_69e8(param_3);
    *param_1 = 0;
  }
  FUN_CODE_69c5(param_3,0x10);
  bVar3 = *param_1 & 0xbf | 0x80;
  FUN_CODE_69c5(param_3,0x10);
  *param_1 = bVar3;
  EA = cVar1 != '\0';
  return;
}


