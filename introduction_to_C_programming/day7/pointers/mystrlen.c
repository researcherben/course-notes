#include <stdio.h>
#define MAX 100
int mystrlen(char *);
int main(){
  char line[MAX], len;
  printf("provide some input: ");
  fgets(line, MAX, stdin);    /* get line from user */
  len = mystrlen(line);  	    /* invoke strlen */
  printf("length of [[%s]] is %d\n", line, len);
}

int mystrlen(char *s){   /* s points to line */
  int count = 0;
//  while(*s != '\0'){  // equivalent to just *s as a test
  while(*s){ // *s is a character. Tests true when *s is null character
    s++;
    count++;            
  }
  return(count);
}
