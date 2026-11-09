/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:55e7, function FUN_CODE_55e7 */

void FUN_CODE_55e7(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a180 = 0x1b;
  FUN_CODE_4908(0xa181,2);
  if (DAT_EXTMEM_9eda == '\0') {
    bVar4 = DAT_EXTMEM_9ede >> 3;
    bVar3 = DAT_EXTMEM_9ede >> 1;
    bVar2 = DAT_EXTMEM_9ede >> 5;
    FUN_CODE_4fd7(&UNK_CODE_9ede,BANK0_R5);
    if (((((bVar4 & 1) != 1) && ((bVar3 & 1) != 1)) && ((bVar2 & 1) != 1)) &&
       (bVar4 = FUN_CODE_4fd7(&UNK_CODE_9ede), (bVar4 & 1) == 0)) {
      if ((DAT_EXTMEM_fd58 & 1) == 1) {
        DAT_EXTMEM_0101 = DAT_EXTMEM_0101 & 0xef;
        FUN_CODE_5666();
        DAT_EXTMEM_0101 = DAT_EXTMEM_0101 | 0x10;
      }
      else {
        FUN_CODE_5666();
      }
    }
  }
  EA = cVar1 != '\0';
  return;
}


