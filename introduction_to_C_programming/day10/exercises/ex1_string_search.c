#include <stdio.h>
#include <string.h> // strcpy, strlen
#include <stdlib.h> // exit
#define MAX_INPUT_LENGTH 100
// validate that string is any number of leading digits, followed by radix, followed by 2 digits
int main(){
  char line[MAX_INPUT_LENGTH];
  strcpy(line,"593292.24"); // valid
//  strcpy(line,"5932d2.24"); // invalid
//  printf("string length: %ld\n",strlen(line));
///*
  char *ptr;
  ptr=line+strlen(line)-3;
//  printf("%p\n",ptr);
//  printf("%c\n",*ptr);
//*/
//  printf("%c\n",line[strlen(line)-3]);
/*
  if (*ptr == '.'){
    printf("%s contains radix at correct position\n", line);
  } 
//*/
  if (*ptr != '.'){
    printf("INVALID STRING: %s does not contain radix at correct position\nExiting\n", line);
    exit(1);
  } 
  int indx;
  for (indx=0; indx<strlen(line); indx++){
    if (indx != strlen(line)-3){
//      putchar(line[indx]);
      if (line[indx]<'0' || line[indx]>'9'){
//        putchar(line[indx]);
        printf("INVALID STRING: %s contains a non-digit character [[%c]]\nExiting\n", line, line[indx]);
        exit(1);
      }
    }
  }
  if (indx == strlen(line)){
    printf("%s is valid", line);
  }
  putchar('\n');
}
