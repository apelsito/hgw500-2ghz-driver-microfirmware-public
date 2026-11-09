/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4889, function FUN_CODE_4889 */

char FUN_CODE_4889(byte param_1,undefined2 param_2,byte param_3)

{
  return (char)((ushort)param_1 * (ushort)param_3 >> 8) +
         ((char)((ushort)param_2 >> 8) -
         ((CARRY1((byte)((ushort)param_1 * (ushort)param_3),(byte)param_2) << 7) >> 7));
}


