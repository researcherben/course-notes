#include <stdio.h>
int main(){
  int a=17, b=4, c;
  c=a+b;
  printf("%d+%d=%d\n",a,b,c);

  double result;
  result= (double) a/b;
  printf("%d/%d=%f\n",a,b,result);

  c=a%b;
  printf("%d%%%d=%d\n",a,b,c);
}
