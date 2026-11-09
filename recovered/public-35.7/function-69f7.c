/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:69f7, function FUN_CODE_69f7 */

char FUN_CODE_69f7(byte param_1)

{
  return -100 - (((0x7e < param_1) << 7) >> 7);
}


