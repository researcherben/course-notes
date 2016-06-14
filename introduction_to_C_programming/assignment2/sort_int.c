#include <stdio.h>
#include <limits.h> // INT_MAX
#define MAX_INT 5
int main(){
  int numbers[MAX_INT];
  numbers[0]=8;
  numbers[1]=11;
  numbers[2]=13;
  numbers[3]=3;
  numbers[4]=9;
  printf("start:  %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  for (int lead_indx=0; lead_indx<MAX_INT; lead_indx++){
    int swap_indx=-1;
    int lowest_value=INT_MAX;
    for (int comparison_indx=lead_indx+1; comparison_indx<MAX_INT; comparison_indx++){
//      printf("lead index: %d, comparison index: %d\n", lead_indx, comparison_indx);
      if (numbers[comparison_indx]<numbers[lead_indx]){
        printf("%d<%d, --> swap candidate\n",numbers[comparison_indx],numbers[lead_indx]);
        if (numbers[comparison_indx]<lowest_value){ // new lowest value
          lowest_value=numbers[comparison_indx];
          swap_indx=comparison_indx;
        }
      }
    }
    printf("before: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    if (swap_indx != -1){
      int temp=numbers[lead_indx];
      numbers[lead_indx]=numbers[swap_indx];
      numbers[swap_indx]=temp;
    }
    printf("after:  %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  }
//  printf("sorted: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
}
