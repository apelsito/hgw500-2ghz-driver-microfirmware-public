/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77e1, function thunk_FUN_CODE_6ade */

void thunk_FUN_CODE_6ade(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  DAT_EXTMEM_a083 = 0;
  do {
    if (DAT_EXTMEM_9e47 <= DAT_EXTMEM_a083) {
      return;
    }
    bVar4 = DAT_EXTMEM_a083;
    FUN_CODE_7322(DAT_EXTMEM_a083 - DAT_EXTMEM_9e47);
    if (bVar4 != 0) {
      pbVar5 = &DAT_EXTMEM_a083;
      FUN_CODE_6c5a(0x12,DAT_EXTMEM_a083);
      if ((*pbVar5 >> 3 & 1) == 1) {
        FUN_CODE_6c24(*pbVar5);
        if ((char)*pbVar5 < '\0') {
          pbVar5 = &DAT_EXTMEM_8102;
          bVar4 = DAT_EXTMEM_a083;
          FUN_CODE_48f3(0x10,DAT_EXTMEM_a083);
          DAT_EXTMEM_a084 = *pbVar5;
          if ((char)DAT_EXTMEM_a084 < '\0') {
            pbVar5 = (byte *)0xa083;
            bVar3 = DAT_EXTMEM_a083;
            bVar2 = FUN_CODE_6c1c(0x12,DAT_EXTMEM_a083);
            bVar2 = bVar2 & 0xf;
            FUN_CODE_9930(bVar3,0x12);
            FUN_CODE_6f13();
            *pbVar5 = bVar2;
            FUN_CODE_6fce(bVar4);
            FUN_CODE_9aa2();
            FUN_CODE_901d(0,1,2,0x10);
            if ((DAT_EXTMEM_a084 >> 6 & 1) == 0) {
              bVar4 = FUN_CODE_6c1c(0x12,DAT_EXTMEM_a083);
              if ((bVar4 & 0xf) != 0) {
                puVar6 = &DAT_EXTMEM_a083;
                bVar4 = DAT_EXTMEM_a083;
                FUN_CODE_6ef8(0x12,DAT_EXTMEM_a083);
                FUN_CODE_4b44(bVar4,0x12,*puVar6);
                FUN_CODE_6f23();
                FUN_CODE_6a02(1,BANK0_R4);
                pbVar5 = &DAT_EXTMEM_a083;
                bVar4 = FUN_CODE_6c1c(DAT_EXTMEM_a083,0x12);
                *pbVar5 = bVar4 - 1 & 0xf | bVar4 & 0xf0;
                return;
              }
              pbVar5 = &DAT_EXTMEM_a083;
              FUN_CODE_6c5a(0x12,DAT_EXTMEM_a083);
              if ((*pbVar5 >> 4 & 3) == 1) {
                FUN_CODE_6c60();
                goto LAB_CODE_6c06;
              }
              uVar1 = 0x12;
              puVar6 = &DAT_EXTMEM_938e;
            }
            else {
              pbVar5 = &DAT_EXTMEM_a083;
              bVar4 = DAT_EXTMEM_a083;
              bVar3 = FUN_CODE_6c1c(0x12,DAT_EXTMEM_a083);
              *pbVar5 = bVar3 & 0xf0;
              bVar4 = FUN_CODE_6c1c(bVar4,0x12);
              *pbVar5 = bVar4 & 0xf;
              uVar1 = 0x10;
              puVar6 = &DAT_EXTMEM_8100;
            }
            bVar4 = DAT_EXTMEM_a083;
            FUN_CODE_48f3(uVar1,DAT_EXTMEM_a083);
            FUN_CODE_4b44(bVar4,0x12,*puVar6);
            FUN_CODE_6f24();
            FUN_CODE_6a02(0,DAT_EXTMEM_a083);
            goto LAB_CODE_6c06;
          }
        }
        DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 0x20;
      }
    }
LAB_CODE_6c06:
    DAT_EXTMEM_a083 = DAT_EXTMEM_a083 + 1;
  } while( true );
}


