/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6952, function FUN_CODE_6952 */

char FUN_CODE_6952(void)

{
  char in_PSW;
  
  return -0x61 - (in_PSW >> 7);
}


