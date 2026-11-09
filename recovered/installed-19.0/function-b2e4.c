/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b2e4, function FUN_CODE_b2e4 */

char FUN_CODE_b2e4(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  
  DAT_EXTMEM_a4f5 = 0;
  DAT_EXTMEM_a4f6 = 0;
  cVar2 = '\x02';
  bVar3 = DAT_EXTMEM_0562;
  DAT_EXTMEM_a34b = DAT_EXTMEM_0561;
  do {
    DAT_EXTMEM_a34a = bVar3 >> 1;
    DAT_EXTMEM_a34b = DAT_EXTMEM_a34b >> 1 | bVar3 << 7;
    cVar2 = cVar2 + -1;
    bVar3 = DAT_EXTMEM_a34a;
  } while (cVar2 != '\0');
  bVar1 = DAT_EXTMEM_a34a <
          (byte)(DAT_EXTMEM_a34c - (((DAT_EXTMEM_a34b < DAT_EXTMEM_a34d) << 7) >> 7));
  if (!bVar1) {
    bVar3 = ('\n' - DAT_EXTMEM_a32c) + (DAT_EXTMEM_a34b - (DAT_EXTMEM_a34d - ((bVar1 << 7) >> 7)));
    bVar4 = bVar3 - 0x19;
    if (bVar3 < 0x19) {
      pcVar5 = (char *)CONCAT11(-0x5d - (((0xd0 < bVar3) << 7) >> 7),bVar3 + 0x2f);
      *pcVar5 = *pcVar5 + '\x01';
      bVar4 = DAT_EXTMEM_a32a + 1;
      DAT_EXTMEM_a32a = bVar4;
    }
    FUN_CODE_b3b7(bVar4);
  }
  cVar2 = DAT_EXTMEM_a32a + 0x9c;
  if (99 < DAT_EXTMEM_a32a) {
    DAT_EXTMEM_a4f6 = 0;
    for (DAT_EXTMEM_a4f5 = 0; DAT_EXTMEM_a4f5 < 0x19; DAT_EXTMEM_a4f5 = DAT_EXTMEM_a4f5 + 1) {
      DAT_EXTMEM_a4f6 =
           DAT_EXTMEM_a4f6 +
           *(char *)CONCAT11(-0x5d - (((0xd0 < DAT_EXTMEM_a4f5) << 7) >> 7),DAT_EXTMEM_a4f5 + 0x2f);
      if (DAT_EXTMEM_a4f6 >= 6) {
        if ((DAT_EXTMEM_a4f5 < 10U - (((DAT_EXTMEM_a4f6 < 6) << 7) >> 7)) << 7 < '\0') {
          DAT_EXTMEM_a329 = '\0';
          DAT_EXTMEM_a328 = '\n' - DAT_EXTMEM_a4f5;
        }
        else {
          DAT_EXTMEM_a329 = DAT_EXTMEM_a4f5 - 10;
          DAT_EXTMEM_a328 = '\0';
        }
        break;
      }
    }
    FUN_CODE_b291(8,DAT_EXTMEM_a329,0);
    cVar2 = FUN_CODE_777a();
  }
  return cVar2;
}


