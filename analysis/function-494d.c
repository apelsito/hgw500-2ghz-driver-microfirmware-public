/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */
/* CODE:494d thunk_FUN_CODE_4908 */

void thunk_FUN_CODE_4908(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar6 = &DAT_CODE_4950;
  while( true ) {
    bVar2 = 1;
    bVar4 = *pbVar6;
    if (bVar4 == 0) break;
    bVar5 = bVar4 & 0x3f;
    pbVar7 = pbVar6 + 1;
    if (bVar5 >> 5 != 0) {
      bVar2 = bVar4 & 0x1f;
      bVar5 = pbVar6[1];
      pbVar7 = pbVar6 + 2;
      if (bVar5 != 0) {
        bVar2 = bVar2 + 1;
      }
    }
    pbVar6 = pbVar7;
    cVar1 = CARRY1(bVar4 & 0xc0,bVar4 & 0xc0) << 7;
    if ((bVar4 & 0x40) == 0) {
      pbVar3 = (byte *)*pbVar6;
      pbVar6 = pbVar6 + 1;
      do {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (cVar1 < '\0') {
          *(byte *)ZEXT12(pbVar3) = bVar2;
        }
        else {
          *pbVar3 = bVar2;
        }
        pbVar3 = pbVar3 + '\x01';
        bVar5 = bVar5 - 1;
      } while (bVar5 != 0);
    }
    else if (cVar1 < '\0') {
      do {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar3 = (byte *)((bVar2 & 0x7f) >> 3 | 0x20);
        bVar4 = *(byte *)((ushort)((bVar2 & 7) + 0xc) + 0x48f4);
        if ((char)bVar2 < '\0') {
          bVar4 = bVar4 | *pbVar3;
        }
        else {
          bVar4 = ~bVar4 & *pbVar3;
        }
        *pbVar3 = bVar4;
        bVar5 = bVar5 - 1;
      } while (bVar5 != 0);
    }
    else {
      pbVar7 = *(byte **)pbVar6;
      pbVar6 = pbVar6 + 2;
      do {
        do {
          bVar4 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *pbVar7 = bVar4;
          pbVar7 = pbVar7 + 1;
          bVar5 = bVar5 - 1;
        } while (bVar5 != 0);
        bVar2 = bVar2 - 1;
      } while (bVar2 != 0);
    }
  }
  FUN_CODE_464d();
  return;
}


