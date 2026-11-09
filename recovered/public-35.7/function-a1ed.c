/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a1ed, function FUN_CODE_a1ed */

char FUN_CODE_a1ed(byte param_1)

{
  return -4 - (((0xeb < param_1) << 7) >> 7);
}


