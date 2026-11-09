/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4eda, function FUN_CODE_4eda */

char FUN_CODE_4eda(undefined2 param_1)

{
  char in_PSW;
  
  return (char)((ushort)param_1 >> 8) - (in_PSW >> 7);
}


