#include <stdio.h>
#include <stdlib.h>  // exit
#include <errno.h> // errno
#include <string.h> // strerror, strcmp
#define MAX_LINE_LENGTH 500
#define MAX_FILENAME_LENGTH 100

// compare 2 files which are supplied as command line arguments
// Usage: /.a.out file1 file2

int main(int argc, char **argv){

  if ((argc < 3) || (argc > 4)){
    printf("Usage:\n./a.out file1 file2\nor\n./a.out file1 file2 +output\nExiting\n");
    exit(1);
  }

  FILE *filepointer1, *filepointer2, *filepointer3;
  char filename1[MAX_FILENAME_LENGTH],filename2[MAX_FILENAME_LENGTH],filename3[MAX_FILENAME_LENGTH];

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
  if (argc == 4){
    if (argv[3][0]=='+'){
      sprintf(filename3, "%s", argv[3]+1);
    } else {
      printf("last arg needs +\nExiting\n");
      exit(1);
    }
    filepointer3=fopen(filename3,"w");
    if (filepointer3 == NULL){
      printf("error message: %s\n", strerror(errno));
      exit(1);		
    }
    // parse filename to remove leading +
//    printf("%c\n",argv[3][0]);
//    printf("comparison: %d\n",argv[3][0]=='+'); // 0=false, 1=true
//    printf("%s\n",argv[3]+1);
  }
  int error_status;
  char line_file1[MAX_LINE_LENGTH],line_file2[MAX_LINE_LENGTH];
  while(fgets(line_file1,MAX_LINE_LENGTH,filepointer1)){
    if (argc == 3){
      printf("%s",line_file1);
    } else {
//      printf("write [[%s]] to file %s\n",line_file1,filename3);
      error_status=fputs(line_file1,filepointer3);
//      printf("error status: %d\n",error_status);//fputs() return a nonnegative number on success, or EOF on error.
    }
  }
  while(fgets(line_file2,MAX_LINE_LENGTH,filepointer2)){
    if (argc == 3){
      printf("%s",line_file2);
    } else {
//      printf("write [[%s]] to file %s\n",line_file2,filename3);
      error_status=fputs(line_file2,filepointer3);
//      printf("error status: %d\n",error_status);//fputs() return a nonnegative number on success, or EOF on error.
    }
  }
  fclose(filepointer1);
  fclose(filepointer2);
  fclose(filepointer3);
}

