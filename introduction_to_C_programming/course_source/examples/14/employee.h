/*  
	employee.h  
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define NAMESIZE 21 

struct employee { 	
	char name[NAMESIZE]; 
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

