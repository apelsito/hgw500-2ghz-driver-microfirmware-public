/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a06d, function FUN_CODE_a06d */

char FUN_CODE_a06d(byte param_1)

{
  return -4 - (((0xed < param_1) << 7) >> 7);
}


