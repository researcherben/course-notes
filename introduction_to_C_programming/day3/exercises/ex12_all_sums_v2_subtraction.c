#include <stdio.h>
#define DESIREDSUM 100
int main() {
  int result_1,result_2,result_3;
  for (int indx_1=1; indx_1<DESIREDSUM/2.0; indx_1++){
    result_1=DESIREDSUM-indx_1;
    printf("%d+%d\n",result_1,indx_1);
    for (int indx_2=1; indx_2<result_1/2.0; indx_2++){
      result_2=result_1-indx_2;
      if (!(result_2==indx_2) && !(result_2==indx_1) && !(indx_2==indx_1)){
        printf("%d+%d+%d\n",result_2,indx_2,indx_1);
      }
      for (int indx_3=1; indx_3<result_2/2.0; indx_3++){
        result_3=result_2-indx_3;
        if (!(result_3==indx_3) && !(result_3==indx_2) && !(result_3==indx_1) && !(indx_3==indx_2) && !(indx_3==indx_1) && !(indx_1==indx_2)){
          printf("%d+%d+%d+%d\n",result_3,indx_3,indx_2,indx_1);
        }
      }
    }
  }
}
