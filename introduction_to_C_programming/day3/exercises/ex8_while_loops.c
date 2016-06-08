#include <stdio.h>
int main(){
  int row_indx=7, col_indx;
  while( row_indx >= 1){
    col_indx=1;
    while( col_indx <= row_indx){
      printf("%d ",col_indx);
      col_indx++;
    }
    row_indx--;
    printf("\n");
  }
}
