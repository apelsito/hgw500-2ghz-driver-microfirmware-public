/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:96ba, function FUN_CODE_96ba */

void FUN_CODE_96ba(undefined1 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5da = param_2;
  if (DAT_EXTMEM_041d == '\0') {
    FUN_CODE_9582(&UNK_CODE_a19d);
    DAT_EXTMEM_a5db = param_1;
    DAT_EXTMEM_a5dc = param_2;
    FUN_CODE_56d7(param_1,param_2,DAT_EXTMEM_a5da);
  }
  else {
    DAT_EXTMEM_a5dd = DAT_EXTMEM_0522;
    FUN_CODE_57ee(0x29);
    if (param_2 == '\x01') {
      FUN_CODE_9582(&UNK_CODE_a19d);
      DAT_EXTMEM_a5db = param_1;
      DAT_EXTMEM_a5dc = param_2;
      FUN_CODE_56d7(param_1,param_2,DAT_EXTMEM_a5da);
    }
    FUN_CODE_53ba(0x2a,DAT_EXTMEM_a5dd);
  }
  DAT_EXTMEM_041f = 0x20;
  EA = cVar1 != '\0';
  return;
}


