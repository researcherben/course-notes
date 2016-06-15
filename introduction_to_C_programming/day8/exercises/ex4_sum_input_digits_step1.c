#include <stdio.h> // printf
#include <string.h> // strlen
int main(int argc, char **argv){
  for (int indx=1; indx<argc; indx++){
    printf("%s,",argv[indx]);
  }
  putchar('\n');
}
