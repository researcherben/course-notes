#include <stdio.h>
int main(){
  int x=11, b=3;
  double result;
  result = x/b; // although the result is type double, the division is of two ints
  printf("%d divided by %d is %f\n", x,b,result);
}
