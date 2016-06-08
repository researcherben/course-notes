//
//  printenv.c
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 100

main(int argc, char** argv, char** envp)
{
	char *p;
	int i;

	for (i = 0; i < 5 ; i ++)
		printf("%s\n", envp[i]);

	printf("\n\n");

	if(argc != 2)
	{
		printf("usage: printenv var_name\n");
		exit(2);
	}
	
	while (*envp != NULL)
	{
		if (strstr(*envp, argv[1]) != NULL)
		{
			p = strchr(*envp, '=');
			printf("%s\n", p + 1);
			exit(0);
		}
		++envp;
	}
	
	printf("%s: not in env\n", argv[1]);
	exit(1);
}
