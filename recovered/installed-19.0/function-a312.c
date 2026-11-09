/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a312, function FUN_CODE_a312 */

void FUN_CODE_a312(byte param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_EXTMEM_a28d == '\x01') && (DAT_EXTMEM_a317 != '\0')) {
    bVar1 = param_1;
    bVar2 = DAT_EXTMEM_a315;
    if ((DAT_EXTMEM_a315 >> 4 == 1) &&
       (DAT_EXTMEM_a31d = DAT_EXTMEM_06aa + 1, bVar1 = DAT_EXTMEM_a31d, bVar2 = DAT_EXTMEM_a31d,
       DAT_EXTMEM_a31e = DAT_EXTMEM_a31d, DAT_EXTMEM_06ab != '\0')) {
      DAT_EXTMEM_a31e = DAT_EXTMEM_06ab + 1;
      bVar1 = param_1;
      bVar2 = DAT_EXTMEM_a31e;
    }
    if ((DAT_EXTMEM_a313 & 1) != 0) {
      FUN_CODE_b2e4(bVar1,bVar2);
    }
    DAT_EXTMEM_a314 = DAT_EXTMEM_a314 | 4;
    DAT_EXTMEM_a320 = 0;
    DAT_EXTMEM_0558 = DAT_EXTMEM_a323;
    DAT_EXTMEM_0157 = 0;
    DAT_EXTMEM_013c = 2;
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xed;
    if (DAT_EXTMEM_a315 >> 4 < 3) {
      if ((DAT_EXTMEM_a30e & 1) == 0) {
        FUN_CODE_ba7d(DAT_EXTMEM_a315);
      }
      else {
        FUN_CODE_b7cf();
      }
    }
    if (((DAT_EXTMEM_a314 >> 3 & 1) != 0) && (DAT_EXTMEM_a31e == BANK0_R7)) {
      FUN_CODE_77bd(DAT_EXTMEM_a31d);
      FUN_CODE_a2aa();
    }
  }
  if ((DAT_EXTMEM_a30e >> 1 & 1) != 1) {
    DAT_EXTMEM_a314 = DAT_EXTMEM_a314 | 4;
  }
  return;
}


