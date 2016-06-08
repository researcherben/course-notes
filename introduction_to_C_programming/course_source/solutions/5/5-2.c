//
//   Exercise 5-2
//
#include <stdio.h>
main()
{
     int c;
     while(( c = getchar()) != EOF){
          if( c == '\n')
               putchar(c);
          putchar(c);
     }
}
