/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7efd, function FUN_CODE_7efd */

void FUN_CODE_7efd(char param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (param_1 != '\0') {
    puVar3 = &DAT_EXTMEM_8d01;
    FUN_CODE_4889(param_2,10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = &DAT_EXTMEM_8d03;
    FUN_CODE_4889(param_2,10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = &DAT_EXTMEM_8d05;
    FUN_CODE_4889(param_2,10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = &DAT_EXTMEM_8d07;
    FUN_CODE_4889(param_2,10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = &DAT_EXTMEM_8d09;
    FUN_CODE_4889(param_2,10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = (undefined1 *)
             CONCAT11(-0x6e - (((0xfe < param_2 * '\x02') << 7) >> 7),param_2 * '\x02' + 1);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)CONCAT11(-0x66 - (((0x6c < param_2) << 7) >> 7),param_2 + 0x93) = 0;
  }
  pbVar4 = &DAT_EXTMEM_8103;
  FUN_CODE_4889(param_2,0x10);
  bVar2 = *pbVar4 & 0xbf | 0x80;
  pbVar4 = &DAT_EXTMEM_8103;
  FUN_CODE_4889(param_2,0x10);
  *pbVar4 = bVar2;
  EA = cVar1 != '\0';
  return;
}


