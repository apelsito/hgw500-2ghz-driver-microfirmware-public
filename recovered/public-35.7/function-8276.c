/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8276, function FUN_CODE_8276 */

void FUN_CODE_8276(byte param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  
  if ((DAT_EXTMEM_9eb6 & 1) != 0) {
    puVar2 = &DAT_EXTMEM_9eb7;
    FUN_CODE_82b5();
    *puVar2 = 1;
    DAT_EXTMEM_9ebe = 0;
    DAT_EXTMEM_9ecb = 0;
    DAT_EXTMEM_9ecc = 0;
    DAT_EXTMEM_9ec8 = 1;
    if (DAT_EXTMEM_9eb5 != '\0') {
      FUN_CODE_58a7(5,0x6f,0xff);
      return;
    }
    FUN_CODE_58a2();
    bVar1 = FUN_CODE_8748();
    if (((bVar1 & 1) != 1) && ((param_1 >> 2 & 1) != 0)) {
      FUN_CODE_87ae();
    }
  }
  return;
}


