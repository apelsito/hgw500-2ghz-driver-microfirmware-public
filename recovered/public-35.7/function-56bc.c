/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:56bc, function FUN_CODE_56bc */

char FUN_CODE_56bc(byte param_1,byte param_2)

{
  return -3 - ((CARRY1(param_1,param_2) << 7) >> 7);
}


