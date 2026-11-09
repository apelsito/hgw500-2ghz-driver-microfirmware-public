/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:500f, function FUN_CODE_500f */

undefined1 FUN_CODE_500f(byte param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_bdb7(*(undefined1 *)(ushort)param_1,0xa1da);
  EA = cVar1 != '\0';
  return DAT_EXTMEM_a1da;
}


