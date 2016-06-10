#include <stdio.h>
int main(){
  char line[200];
  while( gets(line) ){
//    printf("%s\n", line);
    char first_char=line[0];
    char this_char, previous_char;
    this_char=first_char;
    previous_char=first_char;
    int indx=0;
    while ( this_char != '\0' ){
      previous_char=this_char;
      this_char=line[indx++];      
//      printf("%c,%c\n", this_char, previous_char);
    }
//    printf("%c, %c\n", first_char,previous_char);
    if ( first_char == previous_char )
      printf("%s\n",line);
  }
}
