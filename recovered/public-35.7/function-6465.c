/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6465, function FUN_CODE_6465 */

void FUN_CODE_6465(char param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_6f = DAT_EXTMEM_9e4b;
  if (DAT_EXTMEM_9e4b != param_1) {
    if (param_1 == '\x01') {
      if (DAT_EXTMEM_9e4b == '\x04') {
        FUN_CODE_5fe2();
      }
      else if (DAT_EXTMEM_9e4b == '\x02') {
        FUN_CODE_b9d9();
      }
      else if (DAT_EXTMEM_9e4b == '\x03') {
        FUN_CODE_5fd9();
      }
      else if (DAT_EXTMEM_9e4b == '\0') {
        thunk_FUN_CODE_5fdb();
      }
    }
    else if (param_1 == '\x02') {
      if (DAT_EXTMEM_9e4b == '\x04') {
        FUN_CODE_b9f1();
      }
      else if (DAT_EXTMEM_9e4b == '\x01') {
        FUN_CODE_b9e2();
      }
      else if (DAT_EXTMEM_9e4b == '\x03') {
        thunk_FUN_CODE_b9e7();
      }
      else if (DAT_EXTMEM_9e4b == '\0') {
        FUN_CODE_b9fc();
      }
    }
    else if (param_1 == '\x03') {
      if (DAT_EXTMEM_9e4b == '\x04') {
        FUN_CODE_ba09();
      }
      else if (DAT_EXTMEM_9e4b == '\x01') {
        FUN_CODE_ba1c();
      }
      else if (DAT_EXTMEM_9e4b == '\x02') {
        FUN_CODE_ba17();
      }
      else if (DAT_EXTMEM_9e4b == '\0') {
        FUN_CODE_ba23();
      }
    }
    else if (param_1 == '\x04') {
      if (DAT_EXTMEM_9e4b == '\x03') {
        FUN_CODE_ba45();
      }
      else if (DAT_EXTMEM_9e4b == '\x01') {
        FUN_CODE_5fe9();
      }
      else if (DAT_EXTMEM_9e4b == '\x02') {
        FUN_CODE_ba28();
      }
      else if (DAT_EXTMEM_9e4b == '\0') {
        FUN_CODE_67f0();
      }
    }
    else if (param_1 == '\0') {
      if (DAT_EXTMEM_9e4b == '\x04') {
        FUN_CODE_b9cf();
      }
      else if (DAT_EXTMEM_9e4b == '\x02') {
        FUN_CODE_b9cb();
      }
      else if (DAT_EXTMEM_9e4b == '\x03') {
        FUN_CODE_b9d4();
      }
      else if (DAT_EXTMEM_9e4b == '\x01') {
        FUN_CODE_b9be();
      }
    }
  }
  EA = cVar1 != '\0';
  return;
}


