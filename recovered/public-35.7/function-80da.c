/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:80da, function FUN_CODE_80da */

void FUN_CODE_80da(void)

{
  char cVar1;
  
  DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 | 0x10;
  if ((DAT_EXTMEM_9e5b == '\0') || (DAT_EXTMEM_9e5b == '\x01')) {
    DAT_EXTMEM_a179 = 0;
    FUN_CODE_811b(DAT_EXTMEM_9e5b);
    FUN_CODE_80a2();
    cVar1 = DAT_EXTMEM_9e5b;
  }
  else {
    DAT_EXTMEM_a179 = 0;
    FUN_CODE_8122();
    FUN_CODE_811b();
    FUN_CODE_80a2();
    cVar1 = FUN_CODE_8122();
  }
  DAT_EXTMEM_9e6b = FUN_CODE_811b(cVar1);
  if ((DAT_EXTMEM_9e55 >> 2 & 1) != 1) {
    FUN_CODE_81f3();
  }
  return;
}


