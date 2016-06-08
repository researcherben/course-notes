/* 
	getrec.c
*/
#include <stdlib.h>			
#include <stdio.h>
#include <string.h>

#include "employee.h"

struct employee get_rec(void);

main()
{
	struct employee user, worker;
	
	worker = get_rec(); 
	user = get_rec();		
}

struct employee get_rec()
{
	struct employee temp;
	char line[100];

	printf("Enter employee name: ");
	fgets(temp.name, NAMESIZE, stdin);
	temp.name[strlen(temp.name) - 1] = '\0';		// Strip off the newline 	

	printf("Enter employee pay: ");
	temp.pay = atof(fgets(line, 100, stdin));
	
	printf("Enter employee department: ");
	fgets(line, 100, stdin);
	temp.dept = line[0];
	
	return(temp);
}

