/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:58d3, function FUN_CODE_58d3 */

void FUN_CODE_58d3(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte in_PSW;
  char cVar7;
  short sVar8;
  
  if ((DAT_EXTMEM_9f17 & 1) == 1) {
    if (((DAT_EXTMEM_9f98 & 1) == 1) && (FUN_CODE_bcfd(), -1 < (char)in_PSW)) {
      if ((DAT_EXTMEM_9f9f & 1) != 0) {
        DAT_EXTMEM_9f9f = DAT_EXTMEM_9f9f & 0xfe;
        in_PSW = in_PSW & 0xdd;
        DAT_EXTMEM_9f95 = DAT_EXTMEM_9fa1;
        DAT_EXTMEM_9f96 = DAT_EXTMEM_9fa4;
        DAT_EXTMEM_9f1c = DAT_EXTMEM_9fa2;
        DAT_EXTMEM_9f37 = DAT_EXTMEM_9fa3;
      }
      DAT_EXTMEM_a08f = DAT_EXTMEM_0558;
      bVar6 = FUN_CODE_5fc6();
      bVar6 = bVar6 & 7;
      in_PSW = in_PSW & 0xdd;
      if (((bVar6 == 2) || (bVar6 == 0)) &&
         (bVar5 = FUN_CODE_65f4(DAT_EXTMEM_9f98), (bVar5 & 1) != 1)) {
        FUN_CODE_5ff2(bVar6 | 0x40);
        in_PSW = (2U < (byte)(DAT_EXTMEM_9f95 + DAT_EXTMEM_a08f)) << 7;
        FUN_CODE_80a2();
      }
      FUN_CODE_5bd9();
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      sVar8 = 0x562;
      FUN_CODE_5bf2(0x562);
      func_0x085a(0x10);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      FUN_CODE_5bf2(sVar8 + 1);
      func_0x085a(0x18);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      func_0x086d(0xa083);
      FUN_CODE_5bf2(0x565);
      FUN_CODE_5f6e();
      FUN_CODE_5bf2(0x564);
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      sVar8 = 0x566;
      FUN_CODE_5bf2(0x566);
      func_0x085a(0x10);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      FUN_CODE_5bf2(sVar8 + 1);
      func_0x085a(0x18);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      FUN_CODE_5f89();
      FUN_CODE_5bf2(0xa08f,0,0,0,DAT_EXTMEM_9f95);
      FUN_CODE_4846();
      FUN_CODE_4861(4,0);
      FUN_CODE_5f95();
      FUN_CODE_4846();
      FUN_CODE_5d90(0xa08b);
      FUN_CODE_bddd(0xa08b);
      if ((char)in_PSW < '\0') {
        FUN_CODE_5bfb();
        FUN_CODE_5f7c();
      }
      FUN_CODE_5bfb();
      FUN_CODE_bd4c();
      FUN_CODE_5bf9();
      FUN_CODE_bd55();
      FUN_CODE_5bf9();
      FUN_CODE_bd5e();
      FUN_CODE_5bf9();
      FUN_CODE_5f5e(0x588);
      FUN_CODE_bd67();
      FUN_CODE_5f5e();
      FUN_CODE_bd70();
      FUN_CODE_5f5e();
      FUN_CODE_bd79();
      FUN_CODE_5f5e();
      FUN_CODE_b751();
      DAT_EXTMEM_9f99 = 0;
    }
    if ((((DAT_EXTMEM_9f94 & 1) == 1) && ((DAT_EXTMEM_9f98 >> 1 & 0x1f) != 0)) &&
       (bVar6 = (DAT_EXTMEM_9f98 >> 1) - 1 & 0x1f,
       DAT_EXTMEM_9f98 = bVar6 * '\x02' | DAT_EXTMEM_9f98 & 0xc1, bVar6 == 0)) {
      if ((DAT_EXTMEM_9fa0 & 1) != 0) {
        DAT_EXTMEM_9fa0 = DAT_EXTMEM_9fa0 & 0xfe;
        DAT_EXTMEM_9f9f = DAT_EXTMEM_9f9f | 1;
        DAT_EXTMEM_9f94 = DAT_EXTMEM_9f94 & 1 | DAT_EXTMEM_9fa0;
      }
      FUN_CODE_58a7(0x58,DAT_EXTMEM_0522 | 0x40,0,0x40);
      DAT_EXTMEM_0550 = DAT_EXTMEM_0550 & 0xf7;
      FUN_CODE_5bf2(0x569);
      FUN_CODE_5f6e();
      FUN_CODE_5bf2(0x568);
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      sVar8 = 0x56a;
      FUN_CODE_5bf2(0x56a);
      func_0x085a(0x10);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      FUN_CODE_5bf2(sVar8 + 1);
      func_0x085a(0x18);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      FUN_CODE_5d90(0xa083);
      func_0x086d(0xa08b);
      FUN_CODE_5bf2(0x56d);
      FUN_CODE_5f6e();
      FUN_CODE_5bf2(0x56c);
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      sVar8 = 0x56e;
      FUN_CODE_5bf2(0x56e);
      func_0x085a(0x10);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      uVar4 = BANK0_R7;
      uVar3 = BANK0_R6;
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R4;
      FUN_CODE_5bf2(sVar8 + 1);
      func_0x085a(0x18);
      BANK0_R3 = uVar4;
      BANK0_R2 = uVar3;
      BANK0_R1 = uVar2;
      BANK0_R0 = uVar1;
      FUN_CODE_48bd();
      FUN_CODE_5f89();
      FUN_CODE_5f95();
      uVar4 = BANK0_R3;
      uVar3 = BANK0_R2;
      uVar2 = BANK0_R1;
      uVar1 = BANK0_R0;
      bVar6 = DAT_EXTMEM_9f94 >> 1;
      FUN_CODE_bd8b(0,0,0);
      BANK0_R0 = uVar1;
      BANK0_R1 = uVar2;
      BANK0_R2 = uVar3;
      BANK0_R3 = uVar4;
      FUN_CODE_4846();
      func_0x086d(0xa083);
      FUN_CODE_5f60();
      FUN_CODE_5f95();
      cVar7 = '\0';
      FUN_CODE_48ca();
      if (cVar7 < '\0') {
        FUN_CODE_5bfb();
        FUN_CODE_5f7c();
      }
      FUN_CODE_5bfb();
      func_0x0847(0x18);
      FUN_CODE_5bf9(0x567);
      func_0x0847(0x10);
      FUN_CODE_5bf9(0x566);
      func_0x0847(8);
      FUN_CODE_5bf9(0x565);
      DAT_EXTMEM_0564 = bVar6;
      FUN_CODE_5d93();
      func_0x0847(0x18);
      DAT_EXTMEM_0563 = bVar6;
      FUN_CODE_5d93();
      func_0x0847(0x10);
      DAT_EXTMEM_0562 = bVar6;
      FUN_CODE_5d93();
      func_0x0847(8);
      DAT_EXTMEM_0561 = bVar6;
      FUN_CODE_5d93();
      DAT_EXTMEM_0550 = DAT_EXTMEM_0550 | 8;
      DAT_EXTMEM_0560 = bVar6;
      FUN_CODE_58a7(0x59,DAT_EXTMEM_0522 & 0xbf,0x40);
      FUN_CODE_8e33(8);
      DAT_EXTMEM_9f98 = DAT_EXTMEM_9f98 & 0xc1 | 0x29;
    }
  }
  return;
}


