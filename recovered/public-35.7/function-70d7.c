/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:70d7, function FUN_CODE_70d7 */

void FUN_CODE_70d7(void)

{
  byte bVar1;
  
  DAT_EXTMEM_071f = DAT_EXTMEM_071f & 0x7f;
  DAT_EXTMEM_a085 = DAT_EXTMEM_071c & 1;
  if ((DAT_EXTMEM_a085 != 0) && (DAT_EXTMEM_9fac != '\0')) {
    bVar1 = DAT_EXTMEM_9fa9 & 3;
    if (bVar1 == 1) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 6;
    }
    else if (bVar1 == 2) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 0xe;
    }
    else if (bVar1 == 0) {
      DAT_EXTMEM_042d = DAT_EXTMEM_042d | 2;
    }
  }
  DAT_EXTMEM_9fac = 0;
  DAT_EXTMEM_a083 = 2;
  DAT_EXTMEM_a091 = 1;
  FUN_CODE_5575(0x83,0xa0,1);
  FUN_CODE_8ffc(4);
  return;
}


