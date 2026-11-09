/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77d9, function FUN_CODE_77d9 */

byte FUN_CODE_77d9(char param_1,byte param_2,char param_3)

{
  return ~param_2 & *(byte *)(param_1 + param_3);
}


