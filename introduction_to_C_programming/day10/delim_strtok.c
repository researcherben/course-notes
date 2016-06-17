//
//  delim.c
//

#include <string.h>
#include <stdio.h>

#define MAXLINE 100

main ()
{
	char delimiters[50], line[MAXLINE], *p;

	strcpy(delimiters, "_012345679 #@!+={}()*&^%\n");
	strcat(delimiters, "$~\\=-?/>.<,\"':;'\t");
	
	while(gets(line) != NULL)
	{
		p = strtok(line, delimiters);
		while (p != NULL)
		{
			printf("%s\n", p);
			p = strtok(NULL, delimiters);
		}
	}
}

