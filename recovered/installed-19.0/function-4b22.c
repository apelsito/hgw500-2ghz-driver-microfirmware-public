/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4b22, function FUN_CODE_4b22 */

undefined1 FUN_CODE_4b22(byte param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a606 = *(undefined1 *)(ushort)param_1;
  func_0x3e87(0,0x10);
  EA = cVar1 != '\0';
  return DAT_EXTMEM_a606;
}


