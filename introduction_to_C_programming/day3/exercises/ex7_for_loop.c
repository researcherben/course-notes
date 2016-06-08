#include <stdio.h>
int main(){
  for (int max_indx=1; max_indx<=7; max_indx++){
    for (int inner_indx=max_indx; inner_indx>=1; inner_indx--){
      printf("%d ",inner_indx);
    }  
    printf("\n");
  }
}
