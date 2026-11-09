/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9f94, function FUN_CODE_9f94 */

char FUN_CODE_9f94(byte param_1)

{
  return ((char)((ushort)param_1 * 0xf >> 8) - (((99 < (byte)((ushort)param_1 * 0xf)) << 7) >> 7)) +
         -99;
}


