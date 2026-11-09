/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b291, function FUN_CODE_b291 */

void FUN_CODE_b291(char param_1,char param_2)

{
  DAT_EXTMEM_a31f = param_1;
  if ((DAT_EXTMEM_a313 & 1) == 0) {
    DAT_EXTMEM_a323 = '\x02';
  }
  else {
    if (3 < DAT_EXTMEM_a329) {
      DAT_EXTMEM_a31f = param_2 + -3 + param_1;
      param_2 = '\x03';
    }
    DAT_EXTMEM_a323 = ((DAT_EXTMEM_a34e + '\x04') - param_2) + BANK0_R7;
    DAT_EXTMEM_a32c = DAT_EXTMEM_a323;
  }
  DAT_EXTMEM_a322 = 0;
  DAT_EXTMEM_0558 = DAT_EXTMEM_a323;
  return;
}


