/*
        declaration.c
*/
#include <stdio.h>

int sum();                             /* declaration  */

main()
{
	int a, b = 12, c = 5;
	
	printf("Invoking sum\n");	
    a = sum(b, c);                   /* invocation */
    
	printf("%d is sum of %d and %d\n",a, b, c);
}

int sum(int first, int second)          /* definition */
{
 	int c;
   	c = first + second;
    return(c);
}
