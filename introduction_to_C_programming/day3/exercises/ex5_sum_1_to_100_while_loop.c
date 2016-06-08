#include <stdio.h>
int main(){
  int indx, result=0;
  while (indx<=100){
    printf("%d+%d=%d\n", result,indx,result+indx);
    result+=indx;
    indx++;
  }
  printf("sum: %d\n", result);
}
