#include <stdio.h>
int mult(int a, int b){
  return(a*b);
}
int main(){
  int a=2,b=3,c;
  c=mult(a,b);
  printf("%d\n",c);
}
