/* 
	strings.c
*/
#include <stdio.h>
#include <string.h>

#define MAX 100

main()
{
	char line[MAX] = "first";
	char text[MAX] = "second";
	int len;
	
	if (strcmp(line, text) == 0 )
		printf("%s and %s are equal\n", line, text);
	else
		printf("%s and %s NOT equal\n", line, text);
		
	strcpy(line, text);
	if ( strcmp(line, text) == 0 )
		printf("%s and %s are equal\n", line, text);
	else
		printf("%s and %s NOT equal\n", line, text);
		
	strcat(line,text);
	printf("Line is now: %s\n", line);
	
	len = strlen(line);
	printf("Length of %s is %d\n", line, len);
}
