/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bbb6, function FUN_CODE_bbb6 */

void FUN_CODE_bbb6(char param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1e2 = param_1;
  func_0x08aa(0x70,0x9e,1,0,0,0x2d);
  DAT_EXTMEM_9e69 = 0;
  DAT_EXTMEM_9e68 = 0;
  DAT_EXTMEM_9e6c = 0;
  if (DAT_EXTMEM_a1e2 == '\x01') {
    DAT_EXTMEM_9e6d = 0x2d;
    DAT_EXTMEM_9e6e = 0;
  }
  EA = cVar1 != '\0';
  return;
}


