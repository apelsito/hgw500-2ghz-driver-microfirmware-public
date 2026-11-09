/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7305, function FUN_CODE_7305 */

void FUN_CODE_7305(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  
  cVar1 = FUN_CODE_72ff();
  if ((cVar1 == '\x01') && (puVar4 = &DAT_EXTMEM_9e52, DAT_EXTMEM_9e52 != '\0')) {
    uVar2 = FUN_CODE_7423();
    *puVar4 = uVar2;
    bVar3 = FUN_CODE_75ba(DAT_EXTMEM_9e4d);
    if ((bVar3 & 7) == 0) {
      FUN_CODE_6063();
    }
  }
  return;
}


