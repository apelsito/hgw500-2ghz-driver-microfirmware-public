/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6918, function FUN_CODE_6918 */

void FUN_CODE_6918(undefined1 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_CODE_53ba(0x12,0xff);
  DAT_EXTMEM_0778 = 1;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_6c = DAT_EXTMEM_a3fc;
  DAT_INTMEM_6d = '\0';
  if (DAT_EXTMEM_a3fc != '\x02') {
    func_0x37ad(9,0x2c);
    bVar3 = 0;
    func_0x086d(param_1,&UNK_CODE_a593,0);
    if (DAT_INTMEM_6c == '\x01') {
      FUN_CODE_4851(&UNK_CODE_a593);
      bVar3 = bVar3 | 4;
    }
    else {
      FUN_CODE_4851(&UNK_CODE_a593);
      bVar3 = bVar3 | 0x20;
    }
    func_0x086d(param_1,&UNK_CODE_a593,bVar3);
    FUN_CODE_4851(&UNK_CODE_a593);
    func_0x086d(&UNK_CODE_aab9);
    func_0x38a4(9,0x2c);
  }
  if (DAT_INTMEM_6d != '\x02') {
    func_0x37ad(9,0x30);
    bVar2 = 0;
    bVar3 = 0;
    func_0x086d(param_1,&UNK_CODE_a593,0,0,0);
    if (DAT_INTMEM_6d == '\0') {
      FUN_CODE_4851(&UNK_CODE_a593);
      func_0x086d(param_1,&UNK_CODE_a593,bVar3 | 0x70,bVar2 | 7);
    }
    else {
      FUN_CODE_4851(&UNK_CODE_a593);
      func_0x086d(param_1,&UNK_CODE_a593,bVar3 | 0x60,bVar2 | 6);
      func_0x37ad(9,0x2c);
      bVar3 = 0;
      func_0x086d(param_1,&UNK_CODE_a597,0);
      if (DAT_EXTMEM_a3fc == '\0') {
        FUN_CODE_4851(&UNK_CODE_a597);
        bVar3 = bVar3 | 4;
      }
      else {
        FUN_CODE_4851(&UNK_CODE_a597);
        bVar3 = bVar3 | 0x20;
      }
      func_0x086d(param_1,&UNK_CODE_a597,bVar3);
      FUN_CODE_4851(&UNK_CODE_a597);
      func_0x086d(&UNK_CODE_aab9);
      func_0x38a4(9,0x2c);
    }
    FUN_CODE_4851(&UNK_CODE_a593);
    func_0x086d(&UNK_CODE_aab9);
    func_0x38a4(9,0x30);
  }
  EA = cVar1 != '\0';
  return;
}


