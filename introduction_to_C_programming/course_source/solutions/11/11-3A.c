//
//   Exercise 11-3a
//
#include <stdio.h>
#include <string.h>

void reverse(char *string);

main()
{
	char line[100];
	printf("Enter some lines to reverse (or 'quit')\n");
	while(1)
	{
		fgets(line, 100, stdin);
		line[strlen(line) - 1] = '\0';		// Strip off the newline
		if(strcmp(line, "quit") == 0)
			break;
			
		reverse(line);
		printf("%s\n", line);
	}
}

void reverse(char *s)
{
     char temp;
     char *end = s + strlen(s) - 1;
     while( s < end )
     {
          temp = *s;
	      *s = *end;
          *end = temp;
          s++;
          end--;
     }
}
