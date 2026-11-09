/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:75ba, function FUN_CODE_75ba */

void FUN_CODE_75ba(byte param_1,byte *param_2)

{
  *param_2 = param_1 & 0xfb;
  DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 & 0xfd;
  return;
}


