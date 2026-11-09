/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:baf1, function FUN_CODE_baf1 */

byte FUN_CODE_baf1(void)

{
  byte bVar1;
  
  if (DAT_EXTMEM_9e54 != '\0') {
    return DAT_EXTMEM_9e54 - 1;
  }
  if (DAT_EXTMEM_9eb5 != 0) {
    return DAT_EXTMEM_9eb5;
  }
  if ((DAT_EXTMEM_0662 >> 1 & 1) != 0) {
    return DAT_EXTMEM_0662;
  }
  bVar1 = DAT_EXTMEM_0662;
  if (((DAT_EXTMEM_0662 & 1) != 0) && (bVar1 = DAT_EXTMEM_0662 & 0xfc, bVar1 == 0x80)) {
    return 0x80;
  }
  return bVar1;
}


