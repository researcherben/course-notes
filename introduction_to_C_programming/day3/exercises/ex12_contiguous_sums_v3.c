#include <stdio.h>
#define DESIREDSUM 100
void initialize_ary_to_zero(int ary[], int len_ary){  // arrays passed to functions only get address
//  printf("%p\n",ary);
  for (int indx=0; indx<len_ary; indx++)
    ary[indx]=0;
}

void print_ary(int ary[], int len_ary){
  for (int indx=0; indx<len_ary; indx++)
    if (!(ary[indx]==0))
      printf("%d+",ary[indx]);
}  

int main() {
  int size_of_ary=DESIREDSUM/2;
  int result, storage_ary[size_of_ary];
//  printf("%p\n",storage_ary);
//  initialize_ary_to_zero(storage_ary,size_of_ary);


  for (int start_indx=1; start_indx<=DESIREDSUM/2.0; start_indx++){
    initialize_ary_to_zero(storage_ary,size_of_ary);
    result=0;
    int storage_indx=0;
    for (int indx=start_indx; indx<=DESIREDSUM; indx++){
      result+=indx;

//      printf("%d+",indx);
      storage_ary[storage_indx]=indx;
      storage_indx+=1;

      if (result==DESIREDSUM){
//        printf("found it:\n");
        print_ary(storage_ary,size_of_ary);
        printf("= %d\n",result);
        break;
      }
      if (result>DESIREDSUM){
        break;
      }
    }
//    printf("\n");
  }
}
