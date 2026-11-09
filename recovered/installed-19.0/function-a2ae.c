/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a2ae, function FUN_CODE_a2ae */

void FUN_CODE_a2ae(byte param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = ~param_1 & *(byte *)(param_2 + 0x15);
  *(byte *)(param_2 + 0x15) = bVar1;
  *(byte *)CONCAT11('\x01' - (((0xcf < param_2) << 7) >> 7),param_2 + 0x30) = bVar1;
  return;
}


