/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b566, function FUN_CODE_b566 */

void FUN_CODE_b566(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_EXTMEM_9e48;
  if (((DAT_EXTMEM_9e48 & 1) != 0) && (cVar2 = FUN_CODE_826f(), cVar2 == '\0')) {
    return;
  }
  if (((DAT_EXTMEM_9e52 != '\0') || ((bVar1 & 1) != 0)) && (DAT_EXTMEM_9e55 != '\x02')) {
    FUN_CODE_742e();
  }
  return;
}


