//
//   digits.c
//

#include <stdio.h>
#include <string.h>

#define MAXLINE 100

main()
{
	char line[MAXLINE], digits[] = "0123456789";
	int n, d, len;
	
	while (1)
	{
		printf("Enter string: ");
		fgets(line, MAXLINE, stdin);


		line[strlen(line) - 1] = '\0';		// Strip off the newline   
		if(strcmp(line, "quit") == 0)
			break;

	        len = strlen(line);
		if (len == 0)
			printf("You didn't enter anything\n");  
		else if((d = strspn(line, digits)) == len)
			printf("%s is all digits\n", line);
		else if ((n = strcspn(line, digits)) == len)
			printf("%s has no digits\n", line);
		else
		{
			printf("%s is mixed\n", line);
			printf("first non digit is at position %d\n", d);
			printf("first digit is at position %d\n", n);
		}

	}
}
