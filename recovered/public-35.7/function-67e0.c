/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:67e0, function FUN_CODE_67e0 */

undefined1 FUN_CODE_67e0(undefined1 param_1,undefined1 *param_2,byte param_3)

{
  *param_2 = param_1;
  return *(undefined1 *)CONCAT11(-4 - (((0xf6 < param_3) << 7) >> 7),param_3 + 9);
}


