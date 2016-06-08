//
//   Exercise 8-2
//
#include <stdio.h>
#include <string.h>

#define LINE_SIZE 100

void changecase(char s[]);

main()
{
	char line[LINE_SIZE];
	
	printf("Enter a string to change case: ");	
	fgets(line, LINE_SIZE, stdin);
	line[strlen(line) - 1] = '\0';		// Strip off the newline 
	changecase(line);
	printf("%s\n", line);
}

void changecase(char s[])
{
     int i, j;

     j = strlen(s);
     
     for (i = 0; i < j; i++)
     {
          if(s[i] >= 'A' && s[i] <= 'Z')
               s[i] = s[i] - 'A' + 'a';
               
          else if ( s[i] >= 'a' && s[i] <= 'z')
               s[i] = s[i] - 'a' + 'A';
     }
}
