#include <stdio.h>
int main() {
  printf("indx  indx^2  indx^3\n");
  for (int indx=20; indx<=60; indx=indx+2){
    printf("%d  %d  %d\n",indx, indx*indx, indx*indx*indx);
  }
}
