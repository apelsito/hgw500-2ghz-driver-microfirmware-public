/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:66d4, function FUN_CODE_66d4 */

void FUN_CODE_66d4(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (DAT_EXTMEM_a30d == '\x01') {
    uVar2 = 4;
  }
  else {
    FUN_CODE_66c8();
    if (param_1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  FUN_CODE_a5b3(uVar2);
  EA = cVar1 != '\0';
  return;
}


