/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:69cb, function FUN_CODE_69cb */

char FUN_CODE_69cb(void)

{
  char in_PSW;
  
  return -0x6d - (in_PSW >> 7);
}


