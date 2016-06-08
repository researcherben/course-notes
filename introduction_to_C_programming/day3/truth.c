#include <stdio.h>
int main(){
  int x=5, y=10;
  if ( x<y )
    printf("%d\n", x<y);
  if ( "test" ) // address of array evaluates to non-zero
    printf("test is true\n");
}
