//
//   Exercise 5-4
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
          if( c == '\n' ){
               if(line[count - 2] == line[0] ){
                    for (i = 0; i < count; i++)
                         putchar(line[i]);
               }
               count = 0;
          }
     }
}
