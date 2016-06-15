#include <stdio.h> // printf
#include <string.h> // strlen
int main(int argc, char **argv){
  /*
  for (int indx=1; indx<argc; indx++){
    printf("%s,",argv[indx]);
  }
  putchar('\n');
  */
  for (int arg_indx=1; arg_indx<argc; arg_indx++){
    for (int char_indx=0; char_indx<strlen(argv[arg_indx]); char_indx++){
      printf("%c,",argv[arg_indx][char_indx]);
    }
  }
  putchar('\n');
}
