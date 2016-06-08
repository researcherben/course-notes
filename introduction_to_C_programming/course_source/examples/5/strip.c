/*
        strip.c - Strip non-digit characters
*/
#include <stdio.h>

main()
{
	int c;
	
	while(( c = getchar()) != EOF)
		if( c >= '0' && c <= '9')
			putchar(c);	
}
