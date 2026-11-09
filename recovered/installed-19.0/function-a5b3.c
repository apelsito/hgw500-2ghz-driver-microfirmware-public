/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a5b3, function FUN_CODE_a5b3 */

void FUN_CODE_a5b3(char param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a60a = DAT_EXTMEM_a311;
  if (DAT_EXTMEM_a311 != param_1) {
    if (param_1 == '\x01') {
      if (DAT_EXTMEM_a311 == '\x04') {
        FUN_CODE_a723();
      }
      else if (DAT_EXTMEM_a311 == '\x02') {
        FUN_CODE_a713();
      }
      else if (DAT_EXTMEM_a311 == '\x03') {
        FUN_CODE_a706();
      }
      else if (DAT_EXTMEM_a311 == '\0') {
        FUN_CODE_a6e8();
      }
    }
    else if (param_1 == '\x02') {
      if (DAT_EXTMEM_a311 == '\x04') {
        FUN_CODE_a74a();
      }
      else if (DAT_EXTMEM_a311 == '\x01') {
        FUN_CODE_4fea();
      }
      else if (DAT_EXTMEM_a311 == '\x03') {
        FUN_CODE_a737();
      }
      else if (DAT_EXTMEM_a311 == '\0') {
        FUN_CODE_4ff5();
      }
    }
    else if (param_1 == '\x03') {
      if (DAT_EXTMEM_a311 == '\x04') {
        FUN_CODE_a75d();
      }
      else if (DAT_EXTMEM_a311 == '\x01') {
        FUN_CODE_a6da();
      }
      else if (DAT_EXTMEM_a311 == '\x02') {
        FUN_CODE_6fe1();
      }
      else if (DAT_EXTMEM_a311 == '\0') {
        FUN_CODE_a6d8();
      }
    }
    else if (param_1 == '\x04') {
      if (DAT_EXTMEM_a311 == '\x03') {
        FUN_CODE_a772();
      }
      else if (DAT_EXTMEM_a311 == '\x01') {
        FUN_CODE_a6c3();
      }
      else if (DAT_EXTMEM_a311 == '\x02') {
        FUN_CODE_a787();
      }
      else if (DAT_EXTMEM_a311 == '\0') {
        FUN_CODE_a6c1();
      }
    }
    else if (param_1 == '\0') {
      if (DAT_EXTMEM_a311 == '\x04') {
        FUN_CODE_a6ef();
      }
      else if (DAT_EXTMEM_a311 == '\x02') {
        FUN_CODE_a6fe();
      }
      else if (DAT_EXTMEM_a311 == '\x03') {
        FUN_CODE_a702();
      }
      else if (DAT_EXTMEM_a311 == '\x01') {
        FUN_CODE_a6f1();
      }
    }
  }
  EA = cVar1 != '\0';
  return;
}


