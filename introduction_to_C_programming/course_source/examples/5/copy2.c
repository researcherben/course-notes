/*
     copy2.c - A different form of the while test
*/

#include <stdio.h>

main()
{
	int c;
	
	while (( c = getchar()) != EOF)
		putchar(c);
}
