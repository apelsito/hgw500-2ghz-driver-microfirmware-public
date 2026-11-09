/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:87df, function FUN_CODE_87df */

void FUN_CODE_87df(char param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (param_1 == '\x03') {
    bVar2 = FUN_CODE_66a2(&UNK_CODE_9eb9);
    if ((bVar2 & 1) == 0) {
LAB_CODE_880f:
      DAT_EXTMEM_06cc = DAT_EXTMEM_06cc | 3;
      goto LAB_CODE_8813;
    }
  }
  else {
    if ((DAT_EXTMEM_9eba >> 4 & 1) == 0) goto LAB_CODE_8813;
    if (param_1 != '\0') goto LAB_CODE_880f;
  }
  DAT_EXTMEM_06cc = DAT_EXTMEM_06cc & 0xfc;
LAB_CODE_8813:
  EA = cVar1 != '\0';
  return;
}


