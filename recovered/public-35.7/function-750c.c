/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:750c, function FUN_CODE_750c */

void FUN_CODE_750c(byte param_1,byte param_2)

{
  param_1 = *(byte *)(param_2 + 0x15) | param_1;
  *(byte *)(param_2 + 0x15) = param_1;
  *(byte *)CONCAT11('\x01' - (((0xcf < param_2) << 7) >> 7),param_2 + 0x30) = param_1;
  return;
}


