/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a1f0, function FUN_CODE_a1f0 */

char FUN_CODE_a1f0(void)

{
  char in_PSW;
  
  return -4 - (in_PSW >> 7);
}


