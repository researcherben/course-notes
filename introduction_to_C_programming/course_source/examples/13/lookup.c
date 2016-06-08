/* 
	lookup.c
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "employee.h"

main(int argc, char **argv) 
{ 	
	struct employee bank[BANKSIZE];
 	struct employee *ans;
 	
	fill_emp(bank, BANKSIZE);
	
 	while( --argc > 0) 
	{
 		ans = lookup(*++argv, bank, BANKSIZE);
 		
		if(ans == NULL) 			
			printf("%s NOT FOUND\n", *argv);
 		else 			
			output(ans); 	
	} 
}

struct employee * lookup(char *s, struct employee *t, int sz) 
{
	while( sz-- > 0 )
		if(strcmp(s, t++ -> name) == 0)
			return(--t);
			
	return(NULL);
}

void output(struct employee *p) 
{ 	
	printf("%-20s %10.2f %c\n",p->name,p->pay,p->dept);
}

void fill_emp(struct employee *p, int size)
{			 
	int i;
	
	for (i = 0; i < size; i++)
		fill(&p[i]);
}

void fill(struct employee *temp) 
{ 	
	char line[100];
	int len;
	
 	printf("Enter employee name: ");
	fgets(temp -> name, NAMESIZE, stdin);
	temp -> name[strlen(temp -> name) - 1] = '\0';		// Strip off the newline 	

	printf("Enter employee pay: ");
	temp -> pay = atof(fgets(line, 100, stdin));
	
	printf("Enter employee department: ");
	fgets(line, 100, stdin);
	temp -> dept = line[0];
}

