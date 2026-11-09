/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:876e, function FUN_CODE_876e */

void FUN_CODE_876e(char param_1)

{
  byte bVar1;
  
  bVar1 = FUN_CODE_87a7(&UNK_CODE_9edb);
  if ((bVar1 & 1) != 0) {
    DAT_EXTMEM_0778 = 9;
    return;
  }
  if ((DAT_EXTMEM_9f15 & 1) != 0) {
    if (param_1 == '\x03') {
      param_1 = '\x03';
    }
    else if (param_1 == '\t') {
      param_1 = '\v';
    }
    else if (param_1 == '\r') {
      param_1 = '\x0e';
    }
    else {
      param_1 = '\x02';
    }
  }
  DAT_EXTMEM_0778 = param_1;
  return;
}


