#include <stdio.h>
int main(){
  int product=1, indx=1, limit=10;
  while(indx<=limit){
    printf("%d*%d=%d\n", indx,product,product*indx);
    product=product*indx;
    indx++;
  }
  printf("%d!=%d\n", limit,product);
}
