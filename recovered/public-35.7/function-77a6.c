/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77a6, function FUN_CODE_77a6 */

void FUN_CODE_77a6(undefined1 *param_1,byte param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_CODE_77d9(0x1d);
  *param_1 = uVar1;
  *(undefined1 *)CONCAT11('\x01' - (((199 < param_2) << 7) >> 7),param_2 + 0x38) = uVar1;
  return;
}


