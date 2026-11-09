/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b3b7, function FUN_CODE_b3b7 */

char FUN_CODE_b3b7(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_EXTMEM_a3b6 + 1;
  cVar2 = DAT_EXTMEM_a320 - bVar1;
  if (DAT_EXTMEM_a320 >= bVar1) {
    DAT_EXTMEM_a32e = DAT_EXTMEM_a32e + 1;
    bVar1 = 4 - (((DAT_EXTMEM_a320 < bVar1) << 7) >> 7);
    cVar2 = DAT_EXTMEM_a32e - bVar1;
    if (DAT_EXTMEM_a32e < bVar1) {
      DAT_EXTMEM_a32d = DAT_EXTMEM_a32e * '\x02' + '\b';
      DAT_EXTMEM_a328 = DAT_EXTMEM_a32e;
      cVar2 = FUN_CODE_b291(DAT_EXTMEM_a32d,DAT_EXTMEM_a329,DAT_EXTMEM_a32e);
    }
  }
  return cVar2;
}


