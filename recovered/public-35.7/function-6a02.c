/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6a02, function FUN_CODE_6a02 */

void FUN_CODE_6a02(char param_1,byte param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  pbVar3 = &DAT_EXTMEM_a16f;
  DAT_EXTMEM_a16e = param_4;
  DAT_EXTMEM_a16f = param_2;
  FUN_CODE_6c24();
  DAT_EXTMEM_a174 = *pbVar3;
  DAT_EXTMEM_a172 = param_2 & 0x7f;
  if (param_1 == '\0') {
    pbVar3 = &DAT_EXTMEM_a16e;
    FUN_CODE_6c5a(0x12,DAT_EXTMEM_a16e);
    *pbVar3 = *pbVar3 & 0xf7;
    DAT_EXTMEM_a174 = DAT_EXTMEM_a174 & 0x7f;
    bVar2 = BANK0_R5;
    FUN_CODE_b7dd(DAT_EXTMEM_a172);
    FUN_CODE_6f1a();
    DAT_EXTMEM_a0e0 = 0;
    FUN_CODE_b813(0);
  }
  else {
    FUN_CODE_6f1a();
    DAT_EXTMEM_a0e0 = 5;
    FUN_CODE_b813(0);
    pbVar3 = &DAT_EXTMEM_a173;
    FUN_CODE_bc72();
    if (*pbVar3 < 3) {
      DAT_EXTMEM_04cf = 2;
    }
    else {
      DAT_EXTMEM_04cf = 0;
    }
    pbVar3 = &DAT_EXTMEM_a16e;
    FUN_CODE_6c5a(0x12,DAT_EXTMEM_a16e);
    *pbVar3 = *pbVar3 | 8;
    DAT_EXTMEM_a173 = DAT_EXTMEM_a172;
    pbVar3 = &DAT_EXTMEM_4101;
    param_3 = "22$22CKCKCKY22CKCKYZ22CKCKYZ22$22CKCKCKYXXXXXXXXXXXXXXXXRSTUSTUVWXYZVWXYZ[\\]VWXYZ[\\]"
              [(ushort)DAT_EXTMEM_a172 + 0x54];
    FUN_CODE_6c24();
    bVar2 = *pbVar3 & 7;
    DAT_EXTMEM_a174 = param_3 << 3 | bVar2 | 0x80;
  }
  pbVar3 = &DAT_EXTMEM_a16f;
  FUN_CODE_6f09();
  FUN_CODE_4fc0();
  *pbVar3 = bVar2;
  if (param_3 == '\0') {
    DAT_EXTMEM_01c8 = bVar2;
  }
  pbVar3 = &DAT_EXTMEM_a174;
  FUN_CODE_6f09();
  FUN_CODE_6c28(0x10);
  *pbVar3 = bVar2;
  FUN_CODE_6eed(param_3,0x10);
  bVar2 = DAT_EXTMEM_a171 | *pbVar3 & 0xfc;
  pbVar3 = &DAT_EXTMEM_a16e;
  FUN_CODE_6eea(DAT_EXTMEM_a16e);
  *pbVar3 = bVar2;
  FUN_CODE_695a(1);
  EA = cVar1 != '\0';
  return;
}


