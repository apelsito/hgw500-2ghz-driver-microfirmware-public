/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:737b, function FUN_CODE_737b */

void FUN_CODE_737b(char param_1)

{
  char cVar1;
  
  if (param_1 != '\0') {
    cVar1 = FUN_CODE_72ff();
    if (cVar1 == '\x01') {
      DAT_EXTMEM_9e4e = DAT_EXTMEM_9e4e & 0xfe;
      cVar1 = -1;
      FUN_CODE_58a7(0x2b,0xf);
      DAT_EXTMEM_0604 = DAT_EXTMEM_0604 & 0xbf;
      FUN_CODE_77ca();
      if (cVar1 == '\x01') {
        DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d | 0x40;
        FUN_CODE_6296(6,1);
        DAT_EXTMEM_9e4c = 6;
      }
    }
  }
  return;
}


