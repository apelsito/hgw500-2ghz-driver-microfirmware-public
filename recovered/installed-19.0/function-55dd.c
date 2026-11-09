/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:55dd, function FUN_CODE_55dd */

void FUN_CODE_55dd(void)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a60b = DAT_EXTMEM_a5ad;
  if (DAT_EXTMEM_041c == DAT_EXTMEM_a19c) {
    if (DAT_EXTMEM_a31a == '\x0e') {
      if (DAT_EXTMEM_a5ad != '\0') goto LAB_CODE_5641;
      DAT_EXTMEM_a313 = DAT_EXTMEM_a313 & 0x7f;
      FUN_CODE_52f8(0x604);
    }
    else {
      if ((DAT_EXTMEM_a31a != '\x06') || (DAT_EXTMEM_a5ad == '\0')) goto LAB_CODE_5641;
      DAT_EXTMEM_a313 = DAT_EXTMEM_a313 & 0xbf;
      DAT_EXTMEM_0604 = DAT_EXTMEM_0604 | 0xc0;
      DAT_EXTMEM_a31a = '\x04';
    }
    FUN_CODE_53ba(0,0);
  }
LAB_CODE_5641:
  EA = cVar1 != '\0';
  return;
}


