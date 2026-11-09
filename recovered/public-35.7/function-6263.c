/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6263, function FUN_CODE_6263 */

void FUN_CODE_6263(char param_1)

{
  char cVar1;
  
  cVar1 = FUN_CODE_72ff();
  if (cVar1 == '\x01') {
    DAT_EXTMEM_9e4e = DAT_EXTMEM_9e4e & 0xfd;
    FUN_CODE_8eb6(0x2c);
    FUN_CODE_775b();
    FUN_CODE_66a9();
    if (param_1 == '\x01') {
      DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d | 0x80;
      FUN_CODE_6296(0xe,1);
      DAT_EXTMEM_9e4c = 0xe;
    }
  }
  return;
}


