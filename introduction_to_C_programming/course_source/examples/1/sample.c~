/* sample.c*/
#include <stdio.h>
#include <string.h>
#define MAXLINESIZE 100
#define LIMIT 50
/*
		PROGRAM TO NUMBER LINES WHOSE LENGTH
		IS LESS THAN A SPECIFIED NUMBER OF 
		CHARACTERS
*/
main()
{
	char line[MAXLINESIZE];
	int i = 1, len;

	while(fgets(line, MAXLINESIZE, stdin) != NULL) {
		len = strlen(line);	// Includes the newline character
		if ( len < LIMIT ) {
			printf("%4d %s\n", i, line);
			i = i + 1;
		}
	}			
	return(0);		/*	EXIT STATUS */
}	
