#include <stdio.h>
void swap(int *left, int *right);
int main(){
  int x=100, y=200;
  printf("left: %d; right: %d\n", x,y);
  swap(&x,&y); // pass address rather than value
  printf("left: %d; right: %d\n", x,y);
}

void swap(int *left, int *right){
  int temp;
  temp = *left;
  *left = *right;
  *right = temp;
  // change values in place rather than returning things
}
