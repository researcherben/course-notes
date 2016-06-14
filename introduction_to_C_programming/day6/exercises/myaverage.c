#include <stdio.h>
#define COUNT 3
double average(int nums[], int amt);

int main(){
  int nums[COUNT];
  double result;
  nums[0]=4;
  nums[1]=5;
  nums[2]=6;
  result=average(nums, COUNT);
  printf("%f\n", result);
}

double average(int nums[], int amt)
{
    int i;
    int sum = 0;

    for (i = 0; i < amt; i++)            
        sum = sum + nums[i];
        
    return ((double) sum / amt);            
}

