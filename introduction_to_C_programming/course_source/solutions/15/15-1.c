//
//   Exercise 15 - 1
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void printAndExit(char *string, int number);

main(int argc, char **argv)
{
     FILE *fp1, *fp2;
     char line1[MAX], line2[MAX];

     if(argc != 3)
          printAndExit("usage: compare file1 file2\n", 1);
          
     if((fp1 = fopen(argv[1], "r")) == NULL )
          printAndExit("can't open arg 1\n", 2);

     if((fp2 = fopen(argv[2], "r")) == NULL )
          printAndExit("can't open arg 2\n", 3);
          
     while(fgets(line1, MAX, fp1) != NULL)   {
          if(fgets(line2, MAX, fp2) == NULL)
               printAndExit("EOF reached on file2\n", 4);
          if(strcmp(line1, line2) != 0)
               printAndExit("files are different\n", 5);
     }

     if(fgets(line2, MAX, fp2) == NULL)
          printAndExit("files are the same\n", 0);
     else
          printAndExit("EOF reached on file1\n", 6);
}

void printAndExit(char *string, int exitCode)
{
     printf("%s", string);
     exit(exitCode);
}
