#include <stdio.h>
#include <string.h>
int main()
{
	char strings[5][80];	// array of 5 strings.

	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("Enter string # %d: ", i + 1);
		gets(strings[i]);
	}
	printf("NOW PRINT THE STRINGS\n");
	for ( i = 0; i < 5; i++)
	{
//		strings[i][0] = 'A';
		printf("%d %s\n", i + 1, strings[i]);
	}
}
