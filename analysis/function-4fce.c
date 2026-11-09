/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */
/* CODE:4fce FUN_CODE_4fce */

void FUN_CODE_4fce(void)

{
  byte bVar1;
  
  func_0x3e0c(0,1);
  bVar1 = 0xf2;
  FUN_CODE_4b22();
  if ((bVar1 >> 6 & 1) != 1) {
    bVar1 = 5;
    FUN_CODE_4b22(5);
    FUN_CODE_4bde(bVar1 | 0x80,5);
  }
  return;
}


