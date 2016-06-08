//
//   Exercise 11-3c
//
#include <stdio.h>
#include <string.h>

#define MAX 100

int mystrcmp(char *s, char *t);

main()
{
	int i;
	char first[MAX], second[MAX];
	//
	//	3 iterations total:
	//	to test each case
	//
	for (i = 0; i < 3; i++)
	{
		printf("Enter first line:  ");
		fgets(first, MAX, stdin);
		first[strlen(first) - 1] = '\0';		// Strip off the newline
		
		printf("Enter second line: ");
		fgets(second, MAX, stdin);
		second[strlen(second) - 1] = '\0';		// Strip off the newline
		
		if(mystrcmp(first, second) == 0)
			printf("Lines are the same\n");
		else
			printf("Lines are different\n");
	}
}

int mystrcmp(char s[], char t[])
{
     int i = 0;
     
     while(*s == *t)          // SAME CHARACTER
          if(*s == '\0')      //   YES, END OF STRING?
               return(0);     //        YES, RETURN 0
          else
          {               
               s++;                     
	           t++;
	           i++;
          }
          
     return(s[i] - t[i]);     // NO, STRINGS DIFFER
}
