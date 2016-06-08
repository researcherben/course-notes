#include <stdio.h>
#define SIZEOFARY 3
int main() {
  int number_ary[SIZEOFARY];
  int indx;
  for ( indx=0; indx<SIZEOFARY; indx++ ){
    printf("input value %d of %d: ", indx+1, SIZEOFARY);
    scanf("%d", &number_ary[indx]);
  }
  printf("you entered\n");
  for ( indx=0; indx<SIZEOFARY; indx++ ){
    printf("number_ary[%d] = %d\n", indx,number_ary[indx]);
  }
  int value_to_find;
  int value_found=0; // false
  printf("enter a value to find: ");
  scanf("%d", &value_to_find);
  for ( indx=0; indx<SIZEOFARY; indx++ ){
    if ( number_ary[indx] == value_to_find ){
      printf("found value %d at index %d\n", value_to_find, indx);
      value_found=1; // true
    }
  }
  if (!value_found)
    printf("value not found in number_ary\n");
}
