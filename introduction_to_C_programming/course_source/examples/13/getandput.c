/* 
	getandput.c
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "employee.h"

main()
{
    struct employee worker, user;
    
    worker = get_rec();         
    put_rec(worker);
    output(&worker);
    
    fill(&user);
    put_rec(user);
    output(&user);
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

void fill(struct employee *temp) 
{     
    char line[100];
    
    printf("Enter employee name: ");
    fgets(temp -> name, NAMESIZE, stdin);
    temp -> name[strlen(temp -> name) - 1] = '\0';		// Strip off the newline 
    
    printf("Enter employee pay: ");
    temp -> pay = atof(fgets(line, 100, stdin));
    
    printf("Enter employee department ");
    fgets(line, 100, stdin);
    temp -> dept = line[0];
}

void put_rec(struct employee p)
{
    printf("%-20s %10.2f %c\n", p.name, p.pay, p.dept);
}

void output(struct employee *p) 
{     
    printf("%-20s %10.2f %c\n", p->name, p->pay, p->dept);
}

