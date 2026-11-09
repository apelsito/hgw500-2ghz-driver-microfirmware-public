/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a4d8, function FUN_CODE_a4d8 */

undefined1 FUN_CODE_a4d8(undefined1 param_1)

{
  char in_PSW;
  
  return *(undefined1 *)CONCAT11(-4 - (in_PSW >> 7),param_1);
}


