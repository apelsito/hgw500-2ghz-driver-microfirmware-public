/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b618, function FUN_CODE_b618 */

void FUN_CODE_b618(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_6678();
  if (param_1 == '\x01') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  FUN_CODE_6465(uVar2);
  EA = cVar1 != '\0';
  return;
}


