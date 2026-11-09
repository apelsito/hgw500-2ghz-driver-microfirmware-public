/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:675c, function FUN_CODE_675c */

void FUN_CODE_675c(char param_1)

{
  if ((DAT_EXTMEM_a317 != '\x02') && ((DAT_EXTMEM_a315 & 0xf) != 0)) {
    FUN_CODE_a79f();
    if (param_1 == '\0') {
      FUN_CODE_50bd(0,0xc);
    }
  }
  return;
}


