/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:58a7, function FUN_CODE_58a7 */

void FUN_CODE_58a7(char param_1,byte param_2,char param_3)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (param_1 == 'W') {
    DAT_EXTMEM_0522 = FUN_CODE_5fae();
  }
  else if (param_3 == '\0') {
    DAT_EXTMEM_0522 = DAT_EXTMEM_9fae | param_2;
  }
  else {
    FUN_CODE_b12a();
    DAT_EXTMEM_0522 = FUN_CODE_5fae();
  }
  DAT_EXTMEM_9d05 = param_1;
  EA = cVar1 != '\0';
  return;
}


