//
//   Exercise 11-3b
//
#include <stdio.h>
#include <string.h>

void change_case(char *s);

main()
{
	char line[100];
	printf("Enter some lines to change case (or quit):\n");
	while(1){
		fgets(line, 100, stdin);
		line[strlen(line) - 1] = '\0';		// Strip off the newline
		if(strcmp(line, "quit") == 0)
			break;
			
		change_case(line);
		printf("%s\n", line);
	}
}

void change_case(char *s)
{
     
     while(*s != '\0') {
          if(*s >= 'A' && *s <= 'Z')
               *s = *s - 'A' + 'a';
          else if ( *s >= 'a' && *s <= 'z')
               *s = *s - 'a' + 'A';
          s++;
     }
}
