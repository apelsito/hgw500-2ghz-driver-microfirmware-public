/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a070, function FUN_CODE_a070 */

char FUN_CODE_a070(void)

{
  char in_PSW;
  
  return -4 - (in_PSW >> 7);
}


