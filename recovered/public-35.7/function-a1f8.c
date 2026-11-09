/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a1f8, function FUN_CODE_a1f8 */

undefined1 FUN_CODE_a1f8(byte param_1)

{
  return *(undefined1 *)CONCAT11(-4 - (((0xfa < param_1) << 7) >> 7),param_1 + 5);
}


