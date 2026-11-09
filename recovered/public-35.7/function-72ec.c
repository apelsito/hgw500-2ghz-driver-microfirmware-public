/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:72ec, function FUN_CODE_72ec */

void FUN_CODE_72ec(void)

{
  char cVar1;
  
  cVar1 = FUN_CODE_72ff();
  if ((cVar1 == '\x01') && (DAT_EXTMEM_9e52 != '\0')) {
    FUN_CODE_7423();
    FUN_CODE_8098();
  }
  return;
}


