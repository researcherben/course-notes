//
//  delim.c
//

#include <string.h>
#include <stdio.h>

#define MAXLINE 100

main ()
{
	char delimiters[50], line[MAXLINE], *p;

	strcpy(delimiters, "#@!+={}()*&^%\n");
	strcat(delimiters, "$~\\=-?/>.<,\":;'\t");
	
	while(fgets(line, MAXLINE, stdin) != NULL)
	{
		p = strtok(line, delimiters);
		while (p != NULL)
		{
			printf("%s\n", p);
			p = strtok(NULL, delimiters);
		}
		printf("\n%s\n", line);
	}
}

