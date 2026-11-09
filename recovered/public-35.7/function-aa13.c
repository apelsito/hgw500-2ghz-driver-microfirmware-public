/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:aa13, function FUN_CODE_aa13 */

char FUN_CODE_aa13(byte *param_1,byte param_2,char param_3)

{
  return -0x80 - ((param_2 ^ 0x80) - (((*param_1 < param_3 + 1U) << 7) >> 7));
}


