#include <stdio.h>
#include <string.h>
int main()
{
	char line[100];
	printf("Enter a line: ");
	fgets(line,100, stdin);
	printf("The line has length %ld\n before replacement", strlen(line)); // fgets retains the newline ('\n') from input
        // if user enters hi, then the content of the array is "hi\n\0"
        // --> replace \n with \0 in the array
        line[strlen(line)-1]='\0';
	printf("The line has length %ld\n after replacement", strlen(line)); 
}
