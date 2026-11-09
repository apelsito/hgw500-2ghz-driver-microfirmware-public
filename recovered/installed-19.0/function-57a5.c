/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:57a5, function FUN_CODE_57a5 */

void FUN_CODE_57a5(char param_1)

{
  char cVar1;
  
  if ((param_1 != '\0') && (DAT_EXTMEM_a28d == '\x01')) {
    DAT_EXTMEM_a314 = DAT_EXTMEM_a314 & 0xfe;
    FUN_CODE_53ba(0x2b,0xf);
    DAT_EXTMEM_0604 = DAT_EXTMEM_0604 & 0xbf;
    cVar1 = '\0';
    FUN_CODE_53d0(8);
    if (cVar1 == '\x01') {
      DAT_EXTMEM_a313 = DAT_EXTMEM_a313 | 0x40;
      FUN_CODE_5300(6,1);
      DAT_EXTMEM_a312 = 6;
      return;
    }
    DAT_EXTMEM_01b9 = 1;
    DAT_EXTMEM_01b8 = 8;
  }
  return;
}


