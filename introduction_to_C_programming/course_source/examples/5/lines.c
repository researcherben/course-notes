/*
    lines.c - Count lines in standard input
*/
#include <stdio.h>

main()
{
	int lines = 0;
	int c;
	
	while(( c = getchar()) != EOF)
        if( c == '\n')          
			lines++;
			
	printf("%d lines\n", lines);	
}
