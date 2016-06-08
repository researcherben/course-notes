/*	
	mygrep.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100

main(int argc, char **argv)
{
	FILE *fp;
	char line[MAXLINE];
	int i;
	
	if (argc < 3) {
		printf("usage: grep pattern files..\n");
		exit(1);
	}
	
	for (i = 2; i < argc; i++)
		if((fp = fopen(argv[i], "r")) == NULL)
			fprintf(stdout,"bad open %s\n", argv[1]);
		else
			while(fgets(line,MAXLINE,fp) != NULL)
				if(strstr(line, argv[1]) != NULL)
					printf("%s", line);
}	
