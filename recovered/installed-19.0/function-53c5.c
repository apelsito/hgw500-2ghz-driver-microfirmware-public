/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:53c5, function FUN_CODE_53c5 */

void FUN_CODE_53c5(void)

{
  char cVar1;
  char cVar2;
  
  DAT_EXTMEM_a3c4 = DAT_EXTMEM_a3c4 | 2;
  cVar2 = '\x01';
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5ad = 1;
  DAT_EXTMEM_a5ae = 8;
  DAT_EXTMEM_a196 = DAT_EXTMEM_a196 + '\x01';
  if (DAT_EXTMEM_041d == '\0') {
    FUN_CODE_55dd();
    FUN_CODE_56b9();
    if ((DAT_EXTMEM_a41c & 1) != 1) {
      FUN_CODE_b869();
    }
    goto LAB_CODE_543a;
  }
  DAT_EXTMEM_a5b1 = DAT_EXTMEM_0522;
  FUN_CODE_57ee(0x26);
  if (cVar2 == '\x01') {
    FUN_CODE_56b9();
joined_c0x5419:
    if ((DAT_EXTMEM_a41c & 1) != 1) {
      FUN_CODE_b869();
    }
  }
  else if ((DAT_EXTMEM_a3c1 >> 6 & 1) != 0) {
    FUN_CODE_56b9();
    goto joined_c0x5419;
  }
  FUN_CODE_53ba(0x27,DAT_EXTMEM_a5b1);
  FUN_CODE_55dd();
LAB_CODE_543a:
  if (((DAT_EXTMEM_a3bd & 1) != 0) && ((DAT_EXTMEM_a3c1 >> 6 & 1) != 0)) {
    FUN_CODE_53ba(0x28,DAT_EXTMEM_0522 & 0x6f);
  }
  DAT_EXTMEM_041f = 0x20;
  EA = cVar1 != '\0';
  return;
}


