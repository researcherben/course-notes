#include <stdio.h>
#define NUM_INTS 4
void average(int numbers[], int amount, double *avg);
int main(){
  int numbers[NUM_INTS], amount;
  double avrage;
  printf("size of array: %ld bytes\n",sizeof(numbers)); // 16
  amount=NUM_INTS;
  for ( int indx=0; indx<amount; indx++){
    numbers[indx]=indx*2;
    printf("%d\n",numbers[indx]);
  }
  average(numbers, amount, &avrage);
  printf("average: %f\n", avrage);
}
void average(int numbers[], int amount, double *avg){
  int sum=0;
  for ( int indx=0; indx<amount; indx++){
    sum += numbers[indx];
  }
  *avg = ((double) sum)/amount;
}
