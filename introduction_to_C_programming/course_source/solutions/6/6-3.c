//
//   Exercise 6-3
//
#include <stdio.h>

#define MAX 100

void split(char input[], char one[], char two[]);

main()
{
	char line[MAX], two[MAX], one[MAX];
	
	printf("Enter a line with two fields: ");
	fgets(line, MAX, stdin);
	
	split(line, one, two);
	printf("%s\n%s\n", one, two);
}

void split(char s[], char one[], char two[])
{
     int i = 0;
     int k = 0;
     
     while(s[i] == ' ' || s[i] == '\t') 	// skip first set of
	     i++;                               // blanks and tabs
	     
     while(s[i] != ' ' && s[i] != '\t')         // collect first field
	     one[k++] = s[i++];
	     
     one[k] = '\0';                             // null terminate
     
     while(s[i] == ' ' || s[i] == '\t')     // skip second set of
	     i++;                               // blanks and tabs
	     
     k = 0;                                 // collect second field
     while(s[i] != ' ' && s[i] != '\t' && s[i] != '\0')         
	     two[k++] = s[i++];
	     
     two[k] = '\0';                             // null terminate
}
