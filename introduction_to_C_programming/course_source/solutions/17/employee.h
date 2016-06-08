/*  employee.h  */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define NAMESIZE 20
#define FILENAMESIZE 128

struct employee { 	
	char name[NAMESIZE + 1]; 
	double pay; 
	char dept; 
}; 

typedef struct employee WORKER, *PWKR; 

void fill(PWKR);		
void output(PWKR); 
void fill_emp(PWKR, int); 
void print(PWKR, int); 
PWKR lookup(char *, PWKR, int); 

#endif

