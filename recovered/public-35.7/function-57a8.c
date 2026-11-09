/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:57a8, function FUN_CODE_57a8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_CODE_57a8(void)

{
  FUN_CODE_48ff(0xa1b3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


