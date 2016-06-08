/* 
        pointers.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "employee.h"

main()
{
	struct employee bank[BANKSIZE];
	
	fill_emp(bank, BANKSIZE);
	print(bank, BANKSIZE);
}

void fill_emp(struct employee *p, int size)
{			 
	int i;
	
	for (i = 0; i < size; i++)
		fill(&p[i]);
}

void print(struct employee *p, int size) 
{
 	int i;
 	
	for (i = 0; i < size; i++)
 		output(&p[i]);
}

void fill(struct employee *temp) 
{ 	
	char line[100];
	
 	printf("\nEnter employee name: ");
	fgets(temp -> name, NAMESIZE, stdin);
	temp -> name[strlen(temp -> name) - 1] = '\0';		// Strip off the newline 

	printf("Enter employee pay: ");
	temp -> pay = atof(fgets(line, 100, stdin));
	
	printf("Enter employee department: ");
	fgets(line, 100, stdin);
	temp -> dept = line[0];
}

void output(struct employee *p) 
{ 	
	printf("%-20s %10.2f %c\n", p->name, p->pay, p->dept);
}

