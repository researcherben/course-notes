#include <stdio.h>
int main(){
  int count, value, scores[10], howmany;
  printf("size of scores: %ld bytes\n", sizeof(scores));
  count=20;
  scores[0]=10;
  scores[1]=20;
  scores[50]=0;
  printf("scores: %d, %d, %d, %d\n",scores[0],scores[1],scores[19],scores[20]);
  printf("address of array: %p\n", scores);
  value=0x100;
  printf("value = %d, aka %x\n", value, value);
}

