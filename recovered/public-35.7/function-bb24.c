/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bb24, function FUN_CODE_bb24 */

void FUN_CODE_bb24(char param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if ((DAT_EXTMEM_9eb6 & 1) == 0) {
    FUN_CODE_823a();
    if ((((param_1 == '\x01') && ((DAT_EXTMEM_9e56 & 3) == 0)) && ((DAT_EXTMEM_9e56 >> 2 & 1) != 1))
       && (((DAT_EXTMEM_9e56 >> 4 & 1) != 1 && (bVar2 = FUN_CODE_75b0(), (bVar2 & 1) != 0)))) {
      FUN_CODE_bb72();
    }
  }
  else if (DAT_EXTMEM_9ec8 == '\0') {
    FUN_CODE_bb72();
  }
  EA = cVar1 != '\0';
  return;
}


