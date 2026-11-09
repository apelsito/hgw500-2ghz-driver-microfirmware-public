/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7362, function FUN_CODE_7362 */

void FUN_CODE_7362(void)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_CODE_7322();
  if ((cVar1 == '\x01') && (DAT_EXTMEM_9e52 != '\0')) {
    cVar1 = FUN_CODE_776a();
    if (cVar1 != '\x02') {
      FUN_CODE_87ae();
      return;
    }
    FUN_CODE_7771();
  }
  return;
}


