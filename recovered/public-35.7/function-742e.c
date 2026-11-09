/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:742e, function FUN_CODE_742e */

void FUN_CODE_742e(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  cVar1 = '\x02';
  bVar3 = DAT_EXTMEM_0562;
  bVar2 = DAT_EXTMEM_0561;
  do {
    DAT_EXTMEM_a083 = bVar3 >> 1;
    bVar2 = bVar2 >> 1 | bVar3 << 7;
    cVar1 = cVar1 + -1;
    bVar3 = DAT_EXTMEM_a083;
  } while (cVar1 != '\0');
  cVar1 = FUN_CODE_72fe(bVar2,0xa084);
  if ((cVar1 == '\x01') && (DAT_EXTMEM_9e52 != '\0')) {
    cVar1 = FUN_CODE_bd93();
    if ((cVar1 == '\x01') &&
       (DAT_EXTMEM_9e58 = DAT_EXTMEM_06aa, bVar2 = DAT_EXTMEM_06ab,
       DAT_EXTMEM_9e59 = DAT_EXTMEM_06ab, DAT_EXTMEM_06ab == 0)) {
      bVar2 = DAT_EXTMEM_06aa;
      DAT_EXTMEM_9e59 = DAT_EXTMEM_06aa;
    }
    FUN_CODE_aa6c();
    pbVar4 = &UNK_CODE_9e5b;
    FUN_CODE_ac03(0);
    FUN_CODE_7423();
    bVar3 = FUN_CODE_75bc();
    *pbVar4 = bVar3 & 0xef;
    if ((DAT_EXTMEM_9e48 & 1) == 0) {
      FUN_CODE_a59f();
    }
    else {
      FUN_CODE_a525();
    }
    bVar3 = FUN_CODE_666d();
    if ((bVar3 & 1) != 0) {
      if ((bVar2 >> 6 & 1) == 1) {
        if ((((DAT_EXTMEM_9e50 >> 4 == 1) && (bVar3 = FUN_CODE_77d1(), bVar3 != bVar2)) &&
            (bVar3 != DAT_EXTMEM_0573)) && (bVar3 = FUN_CODE_75b0(), (bVar3 & 1) != 0)) {
          FUN_CODE_bd09();
          FUN_CODE_77a6();
          FUN_CODE_77b9();
          FUN_CODE_750c();
        }
      }
      else {
        bVar3 = FUN_CODE_77d1();
        if (bVar3 == bVar2) {
          DAT_EXTMEM_9e4e = DAT_EXTMEM_9e4e | 0x40;
          FUN_CODE_afce();
          FUN_CODE_bd09();
          FUN_CODE_b75a();
          FUN_CODE_77c4();
          FUN_CODE_7520();
          DAT_EXTMEM_9e59 = DAT_EXTMEM_9e59 - 1;
        }
      }
    }
    FUN_CODE_7518();
  }
  if ((DAT_EXTMEM_9e48 >> 1 & 1) != 1) {
    FUN_CODE_7518();
  }
  return;
}


