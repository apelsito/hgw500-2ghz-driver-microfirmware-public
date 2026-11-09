/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:69e8, function FUN_CODE_69e8 */

char FUN_CODE_69e8(char param_1,byte param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           CONCAT11(-0x6e - (((0xfeU < (byte)(param_1 * '\x02')) << 7) >> 7),param_1 * '\x02' + 1);
  *puVar1 = 0;
  puVar1[1] = 0;
  return -100 - (((0x7e < param_2) << 7) >> 7);
}


