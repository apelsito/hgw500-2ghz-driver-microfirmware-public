/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bc7d, function FUN_CODE_bc7d */

char FUN_CODE_bc7d(char param_1)

{
  return -0x6e - (((0xfeU < (byte)(param_1 * '\x02')) << 7) >> 7);
}


