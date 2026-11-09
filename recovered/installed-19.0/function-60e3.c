/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:60e3, function FUN_CODE_60e3 */

char FUN_CODE_60e3(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  
  DAT_INTMEM_64 = 0;
  do {
    bVar4 = *(byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x81);
    DAT_INTMEM_65 = bVar4 & 3;
    DAT_INTMEM_66 = (bVar4 & 4) >> 2;
    if (*(char *)CONCAT11(-0x5e - (((0x72 < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x8d) != '\0'
       ) {
      DAT_EXTMEM_a4f5 = DAT_INTMEM_64 >> 3;
      DAT_EXTMEM_a4f6 = DAT_INTMEM_64 & 7;
      DAT_EXTMEM_a4f7 =
           *(byte *)CONCAT11(-0x6b - (((0xfe < DAT_EXTMEM_a4f5) << 7) >> 7),DAT_EXTMEM_a4f5 + 1);
      bVar4 = 1;
      cVar1 = BANK0_R7 + '\x01';
      while (cVar1 = cVar1 + -1, cVar1 != '\0') {
        bVar4 = bVar4 << 1;
      }
      if ((bVar4 & DAT_EXTMEM_a4f7) != 0) {
        pcVar5 = &DAT_EXTMEM_8101;
        FUN_CODE_4889(DAT_INTMEM_64,0x10);
        if (*pcVar5 < '\0') {
          pbVar6 = &DAT_EXTMEM_8102;
          FUN_CODE_4889(DAT_INTMEM_64,0x10);
          DAT_EXTMEM_a4f8 = *pbVar6;
          if ((char)DAT_EXTMEM_a4f8 < '\0') {
            if ((DAT_EXTMEM_a4f8 >> 6 & 1) == 0) {
              if (DAT_INTMEM_65 != 0) {
                DAT_INTMEM_65 = DAT_INTMEM_65 - 1;
                *(byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x81)
                     = *(byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),
                                         DAT_INTMEM_64 + 0x81) & 0xfc | DAT_INTMEM_65;
                pbVar6 = &DAT_EXTMEM_9796;
                FUN_CODE_4889(DAT_INTMEM_64,5);
                bVar4 = *pbVar6;
                uVar3 = *(undefined1 *)
                         CONCAT11(-0x5f - (((0xeb < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x14)
                ;
                uVar2 = 1;
LAB_CODE_6254:
                DAT_EXTMEM_a59e = bVar4 >> 2 & 3;
                cVar1 = FUN_CODE_626d(uVar2,uVar3,DAT_INTMEM_64);
                return cVar1;
              }
              if ((DAT_INTMEM_66 ^ 1) == 0) {
                *(byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x81)
                     = *(byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),
                                         DAT_INTMEM_64 + 0x81) & 0xfb;
                pbVar6 = &DAT_EXTMEM_9796;
                DAT_INTMEM_66 = DAT_INTMEM_66 ^ 1;
                FUN_CODE_4889(DAT_INTMEM_64,5);
                bVar4 = *pbVar6;
                uVar3 = *(undefined1 *)
                         CONCAT11(-0x62 - (((0xeb < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 + 0x14)
                ;
                uVar2 = 0;
                goto LAB_CODE_6254;
              }
              FUN_CODE_7f8a(DAT_INTMEM_64);
            }
            else {
              pbVar6 = (byte *)CONCAT11(-0x6c - (((0x7e < DAT_INTMEM_64) << 7) >> 7),
                                        DAT_INTMEM_64 + 0x81);
              *pbVar6 = *pbVar6 & 0xf8;
              puVar7 = &DAT_EXTMEM_8100;
              FUN_CODE_4889(DAT_INTMEM_64,0x10);
              pbVar6 = &DAT_EXTMEM_9796;
              FUN_CODE_4889(DAT_INTMEM_64,5,*puVar7);
              DAT_EXTMEM_a59e = *pbVar6 >> 2 & 3;
              FUN_CODE_626d(0,DAT_INTMEM_64);
            }
            goto LAB_CODE_625d;
          }
        }
        DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 0x20;
      }
    }
LAB_CODE_625d:
    bVar4 = DAT_INTMEM_64;
    DAT_INTMEM_64 = DAT_INTMEM_64 + 1;
    if (0x7f < DAT_INTMEM_64) {
      return bVar4 + 0x81;
    }
  } while( true );
}


