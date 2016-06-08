#include <stdio.h>
#define DESIREDSUM 10
void initialize_ary_to_zero(int ary[], int len_ary){  // arrays passed to functions only get address
  printf("%p\n",ary);
  for (int indx=0; indx<len_ary; indx++)
    ary[indx]=0;
}

void print_ary(int ary[], int len_ary){
  for (int indx=0; indx<len_ary; indx++)
    printf("%d,",ary[indx]);
}  

int main() {
  int size_of_ary=DESIREDSUM/2;
  int result, storage_ary[size_of_ary];
  printf("%p\n",storage_ary);
  initialize_ary_to_zero(storage_ary,size_of_ary);
  print_ary(storage_ary,size_of_ary);
  printf("\n");
}
