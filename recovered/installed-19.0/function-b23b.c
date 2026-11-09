/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b23b, function FUN_CODE_b23b */

void FUN_CODE_b23b(void)

{
  byte bVar1;
  byte bVar2;
  
  if (((DAT_EXTMEM_a28d == '\x01') && (DAT_EXTMEM_a317 != '\0')) &&
     (bVar1 = DAT_EXTMEM_a31b & 0xfe, bVar2 = DAT_EXTMEM_a31b & 6, DAT_EXTMEM_a31b = bVar1,
     bVar2 == 0)) {
    FUN_CODE_50a4();
  }
  return;
}


