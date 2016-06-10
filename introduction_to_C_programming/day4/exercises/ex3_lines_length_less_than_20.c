#include <stdio.h>
int main() {
  int line_indx = 0;
  int c;
  int char_count_this_line=0;
  char this_line[200];
  while(( c = getchar()) != EOF){
    this_line[char_count_this_line++]=c;
    if( c == '\n'){  
      this_line[char_count_this_line]='\0';
      printf("%d\n", char_count_this_line);
      printf("%s\n", this_line);
      char_count_this_line=0;
    }
  }
}
