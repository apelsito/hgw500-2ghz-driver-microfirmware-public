/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6f89, function FUN_CODE_6f89 */

void FUN_CODE_6f89(char param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (param_1 == '\x03') {
    if ((DAT_EXTMEM_a3c0 >> 6 & 1) != 0) {
      DAT_EXTMEM_06cc = '\0';
      goto LAB_CODE_6fdb;
    }
  }
  else {
    if (((DAT_EXTMEM_a3c1 >> 4 & 1) != 0) && (DAT_EXTMEM_06cc = param_1, param_1 != '\0')) {
      DAT_EXTMEM_06cc = '\x03';
    }
    if (((DAT_EXTMEM_a409 & 1) == 0) ||
       (((DAT_EXTMEM_a409 >> 4 & 1) != 0 && (DAT_EXTMEM_06cc = param_1, param_1 == '\0'))))
    goto LAB_CODE_6fdb;
  }
  DAT_EXTMEM_06cc = '\x03';
LAB_CODE_6fdb:
  EA = cVar1 != '\0';
  return;
}


