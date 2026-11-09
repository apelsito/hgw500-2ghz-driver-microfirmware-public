/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:66a9, function FUN_CODE_66a9 */

void FUN_CODE_66a9(char param_1)

{
  if ((DAT_EXTMEM_a317 != '\0') || ((DAT_EXTMEM_a30e & 1) != 0)) {
    if ((DAT_EXTMEM_a30e & 1) == 0) {
      FUN_CODE_5774();
    }
    else {
      FUN_CODE_66c8();
      if (param_1 == '\x01') {
        FUN_CODE_675c();
        return;
      }
    }
  }
  return;
}


