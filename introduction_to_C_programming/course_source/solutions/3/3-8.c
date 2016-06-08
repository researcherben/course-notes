//  Exercise 3-8

#include <stdio.h>

main()
{
    int i = 7, j;
    
    while(i >= 1) 
    {
         j = 1;
         while(j <= i) 
         {
             printf("%d ", j);
             j++;
         } 
         printf("\n");
         i--;
     } 
}

