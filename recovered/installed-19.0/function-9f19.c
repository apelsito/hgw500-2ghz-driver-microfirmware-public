/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9f19, function FUN_CODE_9f19 */

void FUN_CODE_9f19(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  if ((DAT_EXTMEM_a3d8 & 1) == 0) {
    FUN_CODE_9ea0();
  }
  else {
    FUN_CODE_6949();
  }
  if (((DAT_EXTMEM_a3c1 >> 6 & 1) != 0) &&
     (DAT_EXTMEM_a405 = DAT_EXTMEM_a405 + '\x01', DAT_EXTMEM_a405 == '\x14')) {
    DAT_EXTMEM_049c = 0;
    DAT_EXTMEM_a405 = '\0';
  }
  if ((DAT_EXTMEM_a30e & 1) != 0) {
    DAT_EXTMEM_a310 = 1;
  }
  bVar3 = 0;
  if (DAT_EXTMEM_a317 != '\0') {
    bVar3 = DAT_EXTMEM_a3c1;
    if ((DAT_EXTMEM_a313 & 1) != 0) {
      DAT_EXTMEM_a32b = DAT_EXTMEM_a32b + '\x01';
      cVar1 = '\x02';
      bVar2 = DAT_EXTMEM_0562;
      bVar3 = DAT_EXTMEM_0561;
      do {
        DAT_EXTMEM_a348 = bVar2 >> 1;
        bVar3 = bVar3 >> 1 | bVar2 << 7;
        cVar1 = cVar1 + -1;
        bVar2 = DAT_EXTMEM_a348;
        DAT_EXTMEM_a349 = bVar3;
      } while (cVar1 != '\0');
    }
    if (((DAT_EXTMEM_a314 >> 3 & 1) != 0) && ((DAT_EXTMEM_013b >> 4 & 1) != 0)) {
      FUN_CODE_a2a4(bVar3);
      DAT_EXTMEM_0573 = DAT_EXTMEM_a31d + -1;
    }
    func_0x08d6(0,0xa5fa,1);
    bVar2 = 0x80 - (((DAT_EXTMEM_a5fb < 0x80) << 7) >> 7);
    bVar3 = (DAT_EXTMEM_a5fa ^ 0x80) - bVar2;
    if (bVar2 <= (DAT_EXTMEM_a5fa ^ 0x80)) {
      bVar3 = DAT_EXTMEM_0198 & 0xfe | 1;
      DAT_EXTMEM_0198 = bVar3;
    }
  }
  FUN_CODE_4eec(bVar3,1);
  return;
}


