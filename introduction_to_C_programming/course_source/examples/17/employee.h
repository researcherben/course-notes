/*  employee.h  */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define NAMESIZE 20 

struct employee
{ 	
	char name[NAMESIZE + 1]; 
	double pay; 
	char dept; 
}; 

typedef struct employee WORKER, *PWKR; 

void fill(PWKR p);		
void output(PWKR p); 
void fill_emp(PWKR array, int size); 
void print(PWKR array, int size); 
PWKR lookup(char* name, PWKR array, int size); 

#endif

