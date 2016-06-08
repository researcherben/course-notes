/*
        malloc.c
*/

#include <stdio.h>	
#include <stdlib.h>	
#include <string.h>
#include <malloc.h>

#define MAX 100

main()
{
	int len, n;
	char input[MAX], *pc;
	
	printf("How many input chars? ");
	fgets(input, MAX, stdin);		     /* get input */
	
	n = atoi(input);	                 /* convert to number */
	
	pc = malloc(n + 2);	     /* ask for space, including newline */		
	if ( pc == NULL)                     /* is there any? */
	{	                		
		printf("malloc: out of memory\n");    /* No	*/
		exit(1);	                   	
	}
	
	printf("Input up to %d chars: ", n);      
	fgets(pc, n + 2, stdin);		/* input the string */
	
	len = strlen(pc);		
	printf("You input %d chars (including newline)\n", len);

	free(pc);		                     /* free the space */
	
	exit(0); 				
} 
