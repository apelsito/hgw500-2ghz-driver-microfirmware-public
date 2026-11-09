/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4853, function FUN_CODE_4853 */

char FUN_CODE_4853(char param_1,char param_2,char param_3,byte param_4,char param_5,byte param_6,
                  byte param_7,byte param_8)

{
  return param_5 - (param_1 -
                   (((param_6 <
                     (byte)(param_2 -
                           (((param_7 < (byte)(param_3 - (((param_8 < param_4) << 7) >> 7))) << 7)
                           >> 7))) << 7) >> 7));
}


