#include <stdio.h>
int main(){
  int indx;
  for (indx=0; indx<3; indx++)
    printf("%d\n", indx);
  printf("final value of indx in for with indx++: %d\n", indx);
  for (indx=0; indx<3; ++indx)
    printf("%d\n", indx);
  printf("final value of indx in for with ++indx: %d\n", indx);
  indx=0;
  while (indx<3){
    printf("%d\n",indx++);
  }
  printf("final value of indx in while: %d\n", indx);
  indx=0;
  while (indx++<3){
    printf("%d\n",indx);
  }
  printf("final value of indx in while: %d\n", indx);
}
