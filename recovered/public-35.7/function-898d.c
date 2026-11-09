/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:898d, function FUN_CODE_898d */

char FUN_CODE_898d(byte param_1)

{
  return -0x62 - (((200 < param_1) << 7) >> 7);
}


