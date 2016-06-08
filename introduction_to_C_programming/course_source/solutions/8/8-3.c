//
//   Exercise 8-3
//
#include <stdio.h>
#include <string.h>

#define LINE_SIZE 100

int mystrcmp(char s[], char t[]);

main()
{
	int result;
	char str1[LINE_SIZE], str2[LINE_SIZE];
	
	printf("Enter first string:  ");	
	fgets(str1, LINE_SIZE, stdin);
	str1[strlen(str1) - 1] = '\0';		// Strip off the newline 	

	printf("Enter second string: ");	
	fgets(str2, LINE_SIZE, stdin);
	str2[strlen(str2) - 1] = '\0';		// Strip off the newline 	

	result = mystrcmp(str1, str2);

	printf("The two strings are ");
	if (result == 0)
	    printf("the same\n");
	else
	    printf("different\n");	
}

int mystrcmp(char s[], char t[])
{
     int i = 0;
     
     while(s[i] == t[i])      // SAME CHARACTER
          if(s[i++] == '\0')  // YES, END OF STRING?
               return(0);     // YES, RETURN 0
               
     return(s[i] - t[i]);     // NO, STRINGS DIFFER
}
