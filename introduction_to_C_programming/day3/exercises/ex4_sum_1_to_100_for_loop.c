#include <stdio.h>
int main(){
  int indx, result=0;
  for (indx=1; indx<=100; indx++){
    printf("%d+%d=%d\n", result,indx,result+indx);
    result += indx;
  }
  printf("sum: %d\n", result);
}
