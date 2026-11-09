/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b398, function FUN_CODE_b398 */

char FUN_CODE_b398(char *param_1)

{
  *param_1 = *param_1 + '\x01';
  return *param_1;
}


