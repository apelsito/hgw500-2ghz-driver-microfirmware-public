/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b7b1, function FUN_CODE_b7b1 */

void FUN_CODE_b7b1(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_4908(0xa1cb);
  cVar2 = '\0';
  do {
    uVar3 = 0xa1;
    FUN_CODE_48ff(0xa1cb);
    puVar4 = (undefined1 *)CONCAT11(uVar3,cVar2);
    uVar3 = FUN_CODE_57b0();
    FUN_CODE_7e9f(0x30);
    *puVar4 = uVar3;
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\b');
  EA = cVar1 != '\0';
  return;
}


