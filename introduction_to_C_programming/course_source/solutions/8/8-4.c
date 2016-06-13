//
//   Exercise 8-4
//
#include <stdio.h>
#include <string.h>

#define LINE_SIZE 100

void reverse(char s[]);
int palindrome(char s[]);

main()
{
	int result, len;
	char line[LINE_SIZE];
	
	printf("Enter a string to check: ");
	fgets(line, LINE_SIZE, stdin);

	len = strlen(line);
	line[len - 1] = '\0';
	    
	result = palindrome(line);

	if (result)
	    printf("WOO HOO, IT'S A PALINDROME!\n"); // racecar, amanaplanacanalpanama
	else
	    printf("Sorry, not a palindrome\n");	
}

void reverse(char s[])
{
     int i = 0, j;
     char temp;
     
     j = strlen(s) - 1;  // point at char before '\0'
     
     while(i < j) {
          temp = s[i];
          s[i] = s[j];
          s[j] = temp;
          i++;
          j--;
     }
}

int palindrome(char s[])
{
	char other[LINE_SIZE];
     
	strcpy(other,s);
	reverse(other);

	return strcmp(other,s) == 0;
/*    
     if(strcmp(other,s) == 0)
          return(1);
     return(0);
*/
}
