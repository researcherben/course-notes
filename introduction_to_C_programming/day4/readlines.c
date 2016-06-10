#include <stdio.h>
int main(){
  char line[100];
  printf("enter a line of text: ");
  gets(line);
  printf("you entered [%s]\n", line);
}
