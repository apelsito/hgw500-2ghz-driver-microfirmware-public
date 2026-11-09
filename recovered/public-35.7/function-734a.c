/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:734a, function FUN_CODE_734a */

void FUN_CODE_734a(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = '\0';
  FUN_CODE_7322();
  if ((cVar1 == '\x01') && (DAT_EXTMEM_9e52 != '\0')) {
    bVar2 = FUN_CODE_a597();
    if ((bVar2 & 7) == 0) {
      FUN_CODE_6063();
    }
  }
  return;
}


