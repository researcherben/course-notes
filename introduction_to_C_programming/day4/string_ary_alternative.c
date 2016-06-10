#include <stdio.h>
#include <string.h>
int main()
{
	char line[100];		 
	printf("enter a word: ");
	scanf("%s", line);
	printf("You entered %s with length %ld\n", line, strlen(line));

	printf("enter another word: ");
	scanf("%s", line);
	printf("You entered %s with length %ld\n", line, strlen(line));
	int i;
	for ( i = 0; i < 10; i++)
		printf("%d %c\n", i, line[i]);

}

