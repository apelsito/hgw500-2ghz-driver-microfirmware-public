/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7e9f, function FUN_CODE_7e9f */

char FUN_CODE_7e9f(byte param_1,byte param_2)

{
  return '\x04' - ((CARRY1(param_1,param_2) << 7) >> 7);
}


