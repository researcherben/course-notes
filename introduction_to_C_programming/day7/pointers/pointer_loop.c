#include <stdio.h>
#define MAX 5
int main(){
  int sum=0, *px, numbers[MAX];
  px=&sum;
  for ( px = numbers; px<numbers+MAX; px++ ){
    sum += *px;
    printf("sum: %d\n",sum);
    printf("%p\n",px);
  }
}
