/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a204, function FUN_CODE_a204 */

undefined1 FUN_CODE_a204(byte param_1)

{
  return *(undefined1 *)CONCAT11(-4 - (((0xde < param_1) << 7) >> 7),param_1 + 0x21);
}


