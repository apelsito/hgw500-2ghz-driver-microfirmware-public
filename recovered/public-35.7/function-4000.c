/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4000, function thunk_FUN_CODE_4975 */

void thunk_FUN_CODE_4975(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar7 = &DAT_CODE_49ba;
  while( true ) {
    bVar2 = 1;
    bVar5 = *pbVar7;
    if (bVar5 == 0) break;
    bVar6 = bVar5 & 0x3f;
    pbVar8 = pbVar7 + 1;
    if (bVar6 >> 5 != 0) {
      bVar2 = bVar5 & 0x1f;
      bVar6 = pbVar7[1];
      pbVar8 = pbVar7 + 2;
      if (bVar6 != 0) {
        bVar2 = bVar2 + 1;
      }
    }
    pbVar7 = pbVar8;
    cVar3 = CARRY1(bVar5 & 0xc0,bVar5 & 0xc0) << 7;
    if ((bVar5 & 0x40) == 0) {
      pbVar4 = (byte *)*pbVar7;
      pbVar7 = pbVar7 + 1;
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if (cVar3 < '\0') {
          *(byte *)ZEXT12(pbVar4) = bVar2;
        }
        else {
          *pbVar4 = bVar2;
        }
        pbVar4 = pbVar4 + '\x01';
        bVar6 = bVar6 - 1;
      } while (bVar6 != 0);
    }
    else if (cVar3 < '\0') {
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar4 = (byte *)((bVar2 & 0x7f) >> 3 | 0x20);
        bVar5 = *(byte *)((ushort)((bVar2 & 7) + 0xc) + 0x4961);
        if ((char)bVar2 < '\0') {
          bVar5 = bVar5 | *pbVar4;
        }
        else {
          bVar5 = ~bVar5 & *pbVar4;
        }
        *pbVar4 = bVar5;
        bVar6 = bVar6 - 1;
      } while (bVar6 != 0);
    }
    else {
      pbVar8 = *(byte **)pbVar7;
      pbVar7 = pbVar7 + 2;
      do {
        do {
          bVar5 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar8 = bVar5;
          pbVar8 = pbVar8 + 1;
          bVar6 = bVar6 - 1;
        } while (bVar6 != 0);
        bVar2 = bVar2 - 1;
      } while (bVar2 != 0);
    }
  }
  puVar1 = &DAT_INTMEM_86;
  DAT_INTMEM_86 = SP;
  cVar3 = '\x02';
  do {
    puVar1 = puVar1 + '\x01';
    *puVar1 = 0xff;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  cVar3 = '\x03';
  puVar1 = &DAT_INTMEM_80;
  do {
    *puVar1 = 0;
    puVar1['\x01'] = 0;
    puVar1 = puVar1 + '\x02';
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  DAT_INTMEM_81 = 0x30;
  bVar2 = TMOD;
  TMOD = bVar2 | 1;
  TL0 = 0x60;
  TH0 = 0x79;
  TR0 = 1;
  EA = 1;
  return;
}


