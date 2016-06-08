//
//   Exercise 15-3
//
#include <stdio.h>
#define MAX 100
void print(char *string, int number);
main(int argc, char **argv)
{
     FILE *fpout, *fpin;
     char line[MAX];
     int i = 1;
     if (argv[argc - 1][0] != '+') 
          fpout = stdout;
     else{
          fpout = fopen(&argv[argc - 1][1],"w");
          argc--;
     }
     while( --argc > 0 )   {
          if((fpin = fopen(argv[i++],"r")) == NULL){
               fprintf(stderr, "can't open %s\n", argv[i]);
               continue;
          }
          while(fgets(line, MAX, fpin) != NULL)
               fprintf(fpout,"%s", line);
     }
}
