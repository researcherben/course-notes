#include <stdio.h>
void swap(int left, int right);
int main(){
  int x=100, y=200;
  printf("left: %d; right: %d\n", x,y);
  swap(x,y); // nothing returned, so x and y are unchanged
  printf("left: %d; right: %d\n", x,y);
}

void swap(int left, int right){
  int temp;
  temp = left;
  left = right;
  right = temp;
  // can't return both values
}
