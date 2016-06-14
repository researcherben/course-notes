#include <stdio.h>
#include "employee.h"
int main(){
  struct employee user, worker;
  printf("%ld\n", sizeof(user)); // 40 bytes, not the expected 21+8+1 due to offset bytes
}


