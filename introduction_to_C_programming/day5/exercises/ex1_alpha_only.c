#include <stdio.h>
int alphacheck(char string[]);
int main(){
  char line[100];
  int contains_only_alphabetic_char=0;
  while( gets(line) ){
    contains_only_alphabetic_char=alphacheck(line);
    if (contains_only_alphabetic_char){
      printf("[[%s]] contains only alphabetic characters\n", line);
    }else{
      printf("[[%s]] contains non-alphabetic characters\n", line);
    }
  }
}
int alphacheck(char string[]){
  char this_char;
//  printf("entered function\n");
  this_char=string[0];
  int indx=0;
  while( this_char != '\0' ){ // null value terminates string in array
    if (this_char < 'a' || this_char > 'z'){
//      printf("non-alpha char [[%c]] found\n",this_char);
      return 0; // non-alpha character found
    }
    this_char=string[indx++];
  }
//  printf("all alpha\n");
  return 1; // true: all alpha characters
}
