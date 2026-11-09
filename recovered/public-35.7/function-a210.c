/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a210, function FUN_CODE_a210 */

void FUN_CODE_a210(char param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1a8 = param_1;
  if (DAT_EXTMEM_041d == '\0') {
    FUN_CODE_a24c();
  }
  else {
    DAT_EXTMEM_a1ab = DAT_EXTMEM_0522;
    FUN_CODE_581d(0x29);
    if (param_1 == '\x01') {
      FUN_CODE_a24c();
    }
    FUN_CODE_58a7(0x2a,DAT_EXTMEM_a1ab,0);
  }
  FUN_CODE_87d8();
  EA = cVar1 != '\0';
  return;
}


