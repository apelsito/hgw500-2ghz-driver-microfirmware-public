/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7322, function FUN_CODE_7322 */

void FUN_CODE_7322(char param_1,byte param_2)

{
  FUN_CODE_8ebd();
  FUN_CODE_898d(param_2 & 7);
  FUN_CODE_77e5();
  do {
    param_1 = param_1 + -1;
  } while (param_1 != '\0');
  return;
}


