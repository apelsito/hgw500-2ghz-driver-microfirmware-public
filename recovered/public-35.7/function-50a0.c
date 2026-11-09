/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50a0, function FUN_CODE_50a0 */

void FUN_CODE_50a0(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_bdb7(param_1,param_2);
  EA = cVar1 != '\0';
  return;
}


