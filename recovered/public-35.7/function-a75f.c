/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a75f, function FUN_CODE_a75f */

void FUN_CODE_a75f(undefined1 param_1,undefined1 param_2)

{
  char in_PSW;
  
  *(undefined1 *)CONCAT11(-4 - (in_PSW >> 7),param_1) = param_2;
  return;
}


