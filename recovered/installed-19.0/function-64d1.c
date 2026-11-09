/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:64d1, function FUN_CODE_64d1 */

char FUN_CODE_64d1(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  
  DAT_EXTMEM_a452 = 0;
  for (DAT_EXTMEM_a453 = 0; bVar4 = DAT_EXTMEM_a453, DAT_EXTMEM_a453 < 0x80;
      DAT_EXTMEM_a453 = DAT_EXTMEM_a453 + 1) {
    *(undefined1 *)CONCAT11(-0x5c - (((0xab < DAT_EXTMEM_a453) << 7) >> 7),DAT_EXTMEM_a453 + 0x54) =
         0;
    pcVar5 = &DAT_EXTMEM_8103;
    FUN_CODE_4889(bVar4,0x10);
    if (*pcVar5 < '\0') {
      *(undefined1 *)CONCAT11(-0x6d - (((0x7e < DAT_EXTMEM_a453) << 7) >> 7),DAT_EXTMEM_a453 + 0x81)
           = 0;
    }
    else {
      FUN_CODE_67cf(DAT_EXTMEM_a453);
      *(undefined1 *)CONCAT11(-0x5c - (((0xab < DAT_EXTMEM_a453) << 7) >> 7),DAT_EXTMEM_a453 + 0x54)
           = 1;
    }
  }
  func_0x3e87(DAT_EXTMEM_a453 + 0x80,0,0xc);
  for (DAT_EXTMEM_a453 = 0; DAT_EXTMEM_a453 < 0x80; DAT_EXTMEM_a453 = DAT_EXTMEM_a453 + 1) {
    if (*(char *)CONCAT11(-0x5c - (((0xab < DAT_EXTMEM_a453) << 7) >> 7),DAT_EXTMEM_a453 + 0x54) !=
        '\0') {
      puVar6 = &DAT_EXTMEM_8106;
      bVar4 = DAT_EXTMEM_a453;
      FUN_CODE_4889(0x10,DAT_EXTMEM_a453);
      uVar1 = *puVar6;
      puVar6 = &DAT_EXTMEM_8107;
      FUN_CODE_4889(bVar4,0x10);
      bVar4 = DAT_EXTMEM_a453;
      puVar7 = (undefined1 *)
               CONCAT11(-0x6e - (((0xfe < DAT_EXTMEM_a453 * '\x02') << 7) >> 7),
                        DAT_EXTMEM_a453 * '\x02' + 1);
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      puVar6 = &DAT_EXTMEM_810a;
      FUN_CODE_4889(bVar4,0x10);
      uVar1 = *puVar6;
      puVar6 = &DAT_EXTMEM_810b;
      FUN_CODE_4889(bVar4,0x10);
      uVar2 = *puVar6;
      puVar6 = &DAT_EXTMEM_8d01;
      FUN_CODE_4889(DAT_EXTMEM_a453,10);
      *puVar6 = uVar2;
      puVar6[1] = uVar1;
      bVar4 = 1;
      do {
        puVar8 = &UNK_CODE_810b;
        bVar3 = DAT_EXTMEM_a453;
        FUN_CODE_4889(0x10,DAT_EXTMEM_a453);
        uVar1 = *(undefined1 *)
                 CONCAT11((char)((ushort)puVar8 >> 8) - ((CARRY1((byte)puVar8,bVar4) << 7) >> 7),
                          (byte)puVar8 + bVar4);
        puVar6 = &DAT_EXTMEM_8d01;
        FUN_CODE_4889(bVar3,10);
        FUN_CODE_4889(bVar4,2);
        *puVar6 = 0;
        puVar6[1] = uVar1;
        bVar4 = bVar4 + 1;
      } while (bVar4 != 5);
      puVar6 = &DAT_EXTMEM_8109;
      bVar4 = DAT_EXTMEM_a453;
      FUN_CODE_4889(0x10);
      *(undefined1 *)CONCAT11(-0x66 - (((0x6c < bVar4) << 7) >> 7),bVar4 + 0x93) = *puVar6;
      FUN_CODE_7efd(DAT_EXTMEM_a452,DAT_EXTMEM_a453);
      *(undefined1 *)CONCAT11(-0x6d - (((0x7e < DAT_EXTMEM_a453) << 7) >> 7),DAT_EXTMEM_a453 + 0x81)
           = 1;
    }
  }
  return DAT_EXTMEM_a453 + 0x80;
}


