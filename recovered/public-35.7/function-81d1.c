/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:81d1, function FUN_CODE_81d1 */

void FUN_CODE_81d1(void)

{
  char cVar1;
  
  if (((DAT_EXTMEM_9eb6 & 1) != 1) && (DAT_EXTMEM_9e52 == '\x01')) {
    cVar1 = FUN_CODE_776a();
    if (cVar1 != '\0') {
      FUN_CODE_589b();
      FUN_CODE_817c();
      return;
    }
    if (DAT_EXTMEM_9e55 == '\0') {
      FUN_CODE_81f3();
    }
  }
  return;
}


