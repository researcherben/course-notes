#include <stdio.h>
#define COUNT 3
void average(int nums[], int amt, double *avrg);

int main(){
  int nums[COUNT];
  double result;
  nums[0]=4;
  nums[1]=5;
  nums[2]=6;
  average(nums, COUNT, &result);
  printf("%f\n", result);
}

void average(int nums[], int amt, double *avrg)
{
    int i;
    int sum = 0;

    for (i = 0; i < amt; i++)            
        sum = sum + nums[i];
        
    *avrg = ((double) sum / amt);            
}

