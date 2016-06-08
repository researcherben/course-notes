/* 
	chars.c - count characters in the standard input
*/
#include <stdio.h>

main()
{
	int count = 0;
	
	while( getchar() != EOF)
		count++;
		
	printf("%d characters \n", count);	
}
