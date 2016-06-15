#include <stdio.h> // printf
#include <string.h> // strlen
#include <stdlib.h> // atoi
int main(int argc, char **argv){
  int total=0;
  /*
  for (int indx=1; indx<argc; indx++){
    printf("%s,",argv[indx]);
  }
  putchar('\n');
  */
  for (int arg_indx=1; arg_indx<argc; arg_indx++){
    for (int char_indx=0; char_indx<strlen(argv[arg_indx]); char_indx++){
      //printf("%c,",argv[arg_indx][char_indx]);
      char this_char=argv[arg_indx][char_indx];
      if ((this_char >= '0') && (this_char <= '9')){
        printf("%c,",this_char);
        total+=atoi(&this_char);
      }
    }
  }
  putchar('\n');
  printf("%d\n",total);
}

