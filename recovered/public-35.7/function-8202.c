/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8202, function FUN_CODE_8202 */

void FUN_CODE_8202(char param_1)

{
  char cVar1;
  
  if ((DAT_EXTMEM_9e52 != '\0') || ((DAT_EXTMEM_9e48 & 1) != 0)) {
    if ((DAT_EXTMEM_9e48 & 1) == 0) {
      FUN_CODE_81d1();
    }
    else {
      FUN_CODE_6678();
      if (param_1 == '\x01') {
        if (DAT_EXTMEM_9e52 != '\x02') {
          cVar1 = FUN_CODE_776a();
          if (cVar1 != '\0') {
            FUN_CODE_823a();
            if (param_1 == '\0') {
              FUN_CODE_607e(0,0xc);
            }
          }
        }
        return;
      }
    }
  }
  return;
}


