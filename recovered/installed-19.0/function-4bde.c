/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4bde, function FUN_CODE_4bde */

void FUN_CODE_4bde(undefined1 param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  *(undefined1 *)(ushort)param_2 = param_1;
  func_0x3e87(0,0x10);
  EA = cVar1 != '\0';
  return;
}


