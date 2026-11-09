/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a17e, function FUN_CODE_a17e */

undefined1 FUN_CODE_a17e(byte param_1)

{
  return *(undefined1 *)CONCAT11(-4 - (((0xf2 < param_1) << 7) >> 7),param_1 + 0xd);
}


