#include <stdio.h>
int plus(int x, int y){
  printf("address of x is %p, y is %p\n",&x,&y);
  return x+y;
}
int main(){
  int a=4,b=3,result;
  result=plus(a,b);
  printf("address of a is %p, b is %p, result is %p\n",&a,&b,&result);
  printf("result: %d\n",result);
}
