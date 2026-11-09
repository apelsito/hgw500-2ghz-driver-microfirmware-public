/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bc72, function FUN_CODE_bc72 */

char FUN_CODE_bc72(byte *param_1)

{
  return -99 - (((0xf5 < *param_1) << 7) >> 7);
}


