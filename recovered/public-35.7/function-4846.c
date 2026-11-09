/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4846, function FUN_CODE_4846 */

char FUN_CODE_4846(char param_1,char param_2,char param_3,byte param_4,char param_5,byte param_6,
                  byte param_7,byte param_8)

{
  return param_5 + (param_1 -
                   ((CARRY1(param_6,param_2 - ((CARRY1(param_7,param_3 - ((CARRY1(param_8,param_4)
                                                                          << 7) >> 7)) << 7) >> 7))
                    << 7) >> 7));
}


