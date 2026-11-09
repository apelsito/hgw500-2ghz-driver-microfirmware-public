/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a4d5, function FUN_CODE_a4d5 */

undefined1 FUN_CODE_a4d5(byte param_1)

{
  return *(undefined1 *)CONCAT11(-4 - (((0xd6 < param_1) << 7) >> 7),param_1 + 0x29);
}


