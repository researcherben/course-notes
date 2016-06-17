#include <stdio.h>
#include <stdlib.h>  // exit
#include <errno.h> // errno
#include <string.h> // strerror, strcmp
#define MAX_LINE_LENGTH 500
#define MAX_FILENAME_LENGTH 100

// compare 2 files which are supplied as command line arguments
// Usage: /.a.out file1 file2

int main(int argc, char **argv){

  if (argc != 3){
    printf("Usage: /.a.out file1 file2\nExiting\n");
    exit(1);
  }

  FILE *filepointer1, *filepointer2;
  char filename1[MAX_FILENAME_LENGTH],filename2[MAX_FILENAME_LENGTH];

  filepointer1=fopen(argv[1],"r");
  if (filepointer1 == NULL){
    printf("error message: %s\n", strerror(errno));
    exit(1);		
  }
  filepointer2=fopen(argv[2],"r");
  if (filepointer2 == NULL){
    printf("error message: %s\n", strerror(errno));
    exit(1);		
  }

  char line_file1[MAX_LINE_LENGTH],line_file2[MAX_LINE_LENGTH];
  while(fgets(line_file1,MAX_LINE_LENGTH,filepointer1)){
    printf("%s",line_file1);
  }
  while(fgets(line_file2,MAX_LINE_LENGTH,filepointer2)){
    printf("%s",line_file2);
  }
}
