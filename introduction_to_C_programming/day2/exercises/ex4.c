#include <stdio.h>
int sum_of_squares(int a, int b){
  return a*a+b*b;
}
int main(){
  int a=5, b=6, c;
  c=sum_of_squares(a,b); // c=61
  printf("%d\n",c);
}
