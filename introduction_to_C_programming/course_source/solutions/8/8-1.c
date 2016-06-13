//
//      Exercise 8-1
//
#include <stdio.h>
#include <string.h>

#define LINE_SIZE 100

void reverse(char s[]);

main()
{
	char line[LINE_SIZE];
	
	printf("Enter a string to reverse: ");
	fgets(line, LINE_SIZE, stdin);
	line[strlen(line) - 1] = '\0';		// Strip off the newline 
	reverse(line);
	printf("%s\n", line);
}

void reverse(char s[])
{
     int i = 0, j; // i is start, j is index for end of array
     char temp;
     
     j = strlen(s) - 1;  // point at char before '\0'
     
/*

abcde\0  i=0; j=5
ebcda\0  i=1; j=4
edcba\0  i=2; j=3

*/

     while(i < j) {
          // swap two characters
          temp = s[i];
          s[i] = s[j];
          s[j] = temp;
          i++;
          j--;
     }
}






