/*  employee.c  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "employee.h"
#include "util.h"

void fill(PWKR temp)
{
	char line[101], pname[NAMESIZE + 2];
	
	printf("Enter employee name: ");
	fgets(pname, NAMESIZE + 2, stdin);
	
    stripnewline(pname);
	strcpy(temp -> name, pname);
	
	printf("Enter employee pay: ");
	temp -> pay = atof(fgets(line, 100, stdin));
	
	printf("Enter employee department: ");
	fgets(line, 100, stdin);
	temp -> dept = line[0];
}

void output(PWKR p)
{
	printf("%s  %.2f  %c\n", p->name, p->pay, p->dept);
}

void fill_emp(PWKR p, int size)
{			 
	int i;
	
	for (i = 0; i < size; i++)
		fill(&p[i]);
}
void print(PWKR p, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		output(&p[i]);
}

PWKR lookup(char *s, PWKR t, int sz) 
{
	while( sz-- > 0 )
		if(strcmp(s, t++ -> name) == 0)
			return(--t);
			
	return(NULL);
}
