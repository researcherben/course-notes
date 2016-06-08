#include <stdio.h>
#define DESIREDSUM 10
int main() {
  int result;
  for (int start_indx=1; start_indx<=DESIREDSUM/2.0; start_indx++){
    result=0;
    for (int indx=start_indx; indx<=DESIREDSUM; indx++){
      result+=indx;
      printf("%d+",indx);
      if (result==DESIREDSUM){
        printf("found it!");
        printf("\nresult: %d\n",result);
        break;
      }
//      if (result>DESIREDSUM){
//        break;
//      }
    }
    printf("\n");
  }
}
