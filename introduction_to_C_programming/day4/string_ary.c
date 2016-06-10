#include <stdio.h>
#define MAX 100
int main()
{
	char line[MAX]; // array of size 100
	printf("enter a word: ");
	scanf("%s", line);  
	printf("You entered %s\n", line);

	printf("enter another word: ");
	scanf("%s", line);  
	printf("You entered %s\n", line);

        printf("%c%c%c\n", line[3],line[4],line[5]);
}
