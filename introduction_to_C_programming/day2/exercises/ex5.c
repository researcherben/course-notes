#include <stdio.h>
int sum_of_squares(int a, int b){
  return a*a+b*b;
}
int is_right(int a, int b, int hypot){
  return sum_of_squares(a,b) == hypot*hypot;
}
int main(){
  int a=3, b=4, hypot=5, result;
  result=is_right(a,b,hypot);
  printf("triangle %d, %d, hypot=%d; is right: %d (1=True, 0=False)\n",a,b,hypot,result);
}
