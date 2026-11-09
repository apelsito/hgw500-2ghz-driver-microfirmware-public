/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b745, function FUN_CODE_b745 */

void FUN_CODE_b745(byte *param_1,undefined1 param_2)

{
  FUN_CODE_69c5(param_2,0x10);
  *param_1 = *param_1 | 0x40;
  return;
}


