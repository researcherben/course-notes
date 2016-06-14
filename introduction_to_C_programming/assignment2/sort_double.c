#include <stdio.h>
#include <float.h> // DBL_MAX
#define MAX_INT 5
int main(){
  double numbers[MAX_INT];
  numbers[0]=8.3;
  numbers[1]=11.1;
  numbers[2]=13.0;
  numbers[3]=3.5;
  numbers[4]=9.9;
  printf("start:  %.1f, %.1f, %.1f, %.1f, %.1f\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  for (int lead_indx=0; lead_indx<MAX_INT; lead_indx++){
    int swap_indx=-1;
    double lowest_value=DBL_MAX;
    for (int comparison_indx=lead_indx+1; comparison_indx<MAX_INT; comparison_indx++){
//      printf("lead index: %d, comparison index: %d\n", lead_indx, comparison_indx);
      if (numbers[comparison_indx]<numbers[lead_indx]){
        printf("%.1f<%.1f, --> swap candidate\n",numbers[comparison_indx],numbers[lead_indx]);
        if (numbers[comparison_indx]<lowest_value){ // new lowest value
          lowest_value=numbers[comparison_indx];
          swap_indx=comparison_indx;
        }
      }
    }
    printf("before: %.1f, %.1f, %.1f, %.1f, %.1f\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    if (swap_indx != -1){
      int temp=numbers[lead_indx];
      numbers[lead_indx]=numbers[swap_indx];
      numbers[swap_indx]=temp;
    }
    printf("after:  %.1f, %.1f, %.1f, %.1f, %.1f\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  }
//  printf("sorted: %.1f, %.1f, %.1f, %.1f, %.1f\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
}
