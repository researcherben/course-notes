// see strip.c

#include <stdio.h>
int main(){
  int c;
  while(( c = getchar()) != EOF)
    if( c < '0' || c > '9')
      putchar(c);	
  printf("\n");
}
