/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b122, function FUN_CODE_b122 */

void FUN_CODE_b122(byte *param_1,byte param_2,byte param_3,byte param_4)

{
  *param_1 = param_2 & param_4 | *param_1 & param_3;
  return;
}


