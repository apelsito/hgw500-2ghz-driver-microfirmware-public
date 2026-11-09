/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:67e1, function FUN_CODE_67e1 */

undefined1 FUN_CODE_67e1(byte param_1)

{
  return *(undefined1 *)CONCAT11(-4 - (((0xf6 < param_1) << 7) >> 7),param_1 + 9);
}


