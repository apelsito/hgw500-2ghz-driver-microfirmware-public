/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4fce, function FUN_CODE_4fce */

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


