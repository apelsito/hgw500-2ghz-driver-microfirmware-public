/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:816e, function FUN_CODE_816e */

void FUN_CODE_816e(undefined1 *param_1,undefined1 param_2)

{
  FUN_CODE_bcd2();
  *param_1 = param_2;
  FUN_CODE_80ad(0,0,1,0x6c);
  return;
}


