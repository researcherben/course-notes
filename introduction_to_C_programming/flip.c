//#include <stdio.h>
#include <string.h> // memset
int main(){
  unsigned int x[1000000];
  while(1){
    memset(&x, 1 , sizeof(int) * 1000);
    memset(&x, 0 , sizeof(int) * 1000);
  }
}
