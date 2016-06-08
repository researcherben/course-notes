//
//   Exercise 5-3
//
#include <stdio.h>
#define MAXLINE 100
main()
{
     int c, i;
     int count = 0;
     char line[MAXLINE];
     while(( c = getchar()) != EOF){
          line[count++] = c;
          if ( c == '\n' ) {
               if ( count < 20 ) {
                    for (i = 0; i < count; i++)
                         putchar(line[i]);
               }
               count = 0;
          }
     }
}

