/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:61c6, function FUN_CODE_61c6 */

byte FUN_CODE_61c6(char param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if ((DAT_EXTMEM_9eb6 & 1) == 0) {
    bVar2 = FUN_CODE_823a();
    if (param_1 != '\x01') goto LAB_CODE_61ff;
  }
  else {
    bVar2 = DAT_EXTMEM_9ebc >> 5;
    if ((bVar2 & 1) != 0) goto LAB_CODE_61ff;
  }
  bVar2 = FUN_CODE_87a7(&UNK_CODE_9e4d);
  if ((bVar2 & 1) != 1) {
    bVar2 = DAT_EXTMEM_9e54 - 5;
  }
LAB_CODE_61ff:
  EA = cVar1 != '\0';
  return bVar2;
}


