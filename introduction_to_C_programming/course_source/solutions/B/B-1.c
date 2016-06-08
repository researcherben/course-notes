//
//   Exercise B-1
//
#include <stdio.h>
#include <string.h>

#define MAX 100

main()
{
     char *pc;
     int pf;
     char digits[11];
     char line[MAX];
     
     strcpy(digits, "0123456789");
     
     while(1)
     {
          printf("Enter a string of the form 'ddddd.dd' (or 'quit'): ");
          fgets(line, MAX, stdin);
          line[strlen(line) - 1] = '\0';		// Strip off the newline 

          if(strcmp(line, "quit") == 0)
               break;
               
          if((pc = strchr(line,'.')) == NULL)
          {
               printf("STRING CONTAINS NO DECIMAL POINT\n");
               continue;
          }

          
          *pc = '\0';
          ++pc;     //   POINTS TO FIRST CHAR AFTER DECIMAL PT.
          if(strlen(pc) != 2)
          {
               printf("NEED EXACTLY 2 DIGITS AFTER DECIMAL POINT\n");
               continue;
          }
          
          pf = strspn(line, digits);
          if(pf != strlen(line))
          {
               printf("AT LEAST ONE BAD CHAR BEFORE DECIMAL POINT\n");
               continue;
          }
          
          pf = strspn(pc, digits);
          if(pf != strlen(pc)) {
               printf("AT LEAST ONE BAD CHAR AFTER DECIMAL POINT\n");
               continue;line[strlen(line) - 1] = '\0';		// Strip off the newline 

          }
          
          printf("STRING IS OK\n");
     }
}
