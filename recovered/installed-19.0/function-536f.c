/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:536f, function FUN_CODE_536f */

void FUN_CODE_536f(void)

{
  char cVar1;
  
  if (DAT_EXTMEM_a28d == '\x01') {
    DAT_EXTMEM_a314 = DAT_EXTMEM_a314 & 0xfd;
    cVar1 = 'o';
    FUN_CODE_53ba(0x2c);
    FUN_CODE_53c5();
    if (cVar1 == '\x01') {
      DAT_EXTMEM_a313 = DAT_EXTMEM_a313 | 0x80;
      FUN_CODE_5300(0xe,1);
      DAT_EXTMEM_a312 = 0xe;
      return;
    }
    DAT_EXTMEM_01b9 = 1;
    DAT_EXTMEM_01b8 = 2;
  }
  return;
}


