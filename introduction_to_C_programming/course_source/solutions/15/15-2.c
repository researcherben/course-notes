//
//   Exercise 15-2
//
#include <stdio.h>

#define MAX 100

main(int argc, char **argv)
{
     FILE *fpin;
     char line[MAX];
     int i = 1;
     
     while( --argc > 0 )   {
          if((fpin = fopen(argv[i++],"r")) == NULL){
               fprintf(stderr, "Can't open %s\n", argv[i]);
               continue;
          }
          while(fgets(line, MAX, fpin) != NULL)
               printf("%s", line);
     }
}
