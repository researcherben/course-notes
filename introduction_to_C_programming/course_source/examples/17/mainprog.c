/*  mainprog.c  */

#include <stdio.h>
#include <stdlib.h>

#include "employee.h"
#include "dbfunc.h"

#define MAXLINE   100

#define CREATE_DB 1
#define PRINT_DB  2
#define RETRIEVE  3
#define QUIT      4

int menu(void); 

main() 
{ 
	char line[MAXLINE]; 
	int selection;
	
	while(1)
	{ 
		selection = menu(); 
		switch(selection)
		{ 
			case CREATE_DB: 
				create_db(); 
				break; 
			case PRINT_DB:
				print_db(); 
				break; 
			case RETRIEVE:
				retrieve_db();
				break;
			case QUIT: 
				exit(0); 
			default: 
				printf("IMPOSSIBLE\n"); 
		}
		
		printf("Press RETURN to continue\n"); 
		fgets(line, MAXLINE, stdin); 
    } 
}	 

int menu(void) 
{ 
	int choice; 
	char line[MAXLINE + 1];
	
	while(1)
	{ 
		printf("\n\n");	
		printf("SELECT CHOICE\n\n");	
		printf("1) CREATE DATABASE\n"); 
		printf("2) PRINT DATABASE\n"); 
		printf("3) RETRIEVE\n");
		printf("4) QUIT\n==>");  
		choice = atoi(fgets(line, MAXLINE, stdin));
		
		if(choice < 1 || choice > QUIT)
        { 
            printf("ILLEGAL CHOICE\n"); 
            printf("PRESS RETURN TO CONTINUE\n"); 
            fgets(line, MAXLINE, stdin); 
        } 
        else 
            return(choice); 
    } 
} 
