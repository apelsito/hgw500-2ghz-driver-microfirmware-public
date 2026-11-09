/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5fc4, function FUN_CODE_5fc4 */

void FUN_CODE_5fc4(char *param_1,char param_2)

{
  DAT_EXTMEM_a5a6 = *param_1 - param_2;
  DAT_EXTMEM_a5a5 = 0;
  FUN_CODE_5abf(0,0,1,0x6c);
  return;
}


