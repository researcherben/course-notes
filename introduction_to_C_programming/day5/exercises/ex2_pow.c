#include <stdio.h>
long power(int base, int exponent);
int main(){
  long int answer;
  int base,exponent;
  printf("Enter base integer: ");
  scanf("%d",&base);
  printf("Enter exponent integer: ");
  scanf("%d",&exponent);

  answer=power(base,exponent);
  printf("%d raised to the power %d is %ld\n", base, exponent, answer);
}

long power(int base, int exponent){
  long int answer;
  answer=base;
  for (int indx=0; indx<exponent-1; indx++)
    answer *= base;
  return answer;
}

