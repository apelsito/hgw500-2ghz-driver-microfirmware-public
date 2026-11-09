/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a4ba, function FUN_CODE_a4ba */

char FUN_CODE_a4ba(void)

{
  char in_PSW;
  
  return -4 - (in_PSW >> 7);
}


