/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4bc8, function FUN_CODE_4bc8 */

void FUN_CODE_4bc8(void)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 2;
  FUN_CODE_4b22(2);
  FUN_CODE_4bde(bVar2 | 1,2);
  bVar2 = 2;
  FUN_CODE_4b22();
  bEXTMEM0002 = bVar2 & 0xfe;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  func_0x3e87(0,0x10);
  EA = cVar1 != '\0';
  return;
}


