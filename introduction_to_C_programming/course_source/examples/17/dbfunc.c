/*  dbfunc.c  */

#include <stdio.h>
#include <string.h>

#include "employee.h"
#include "dbfunc.h"
#include "util.h"

void create_db() 
{ 
    WORKER person; 
	FILE *fp; 
	char fname[FILENAMESIZE + 1], line[101]; 
	int number, i;
	
	printf("Enter filename to write to: ");
    fgets(fname, FILENAMESIZE, stdin);
    stripnewline(fname);
    
	if((fp = fopen(fname, "wb")) == NULL) {
		printf("Can't open %s\n", fname);
		return;
	}
	
	printf("How many records to input? "); 
 	number = atoi(fgets(line, 100, stdin));
 	
 	for (i = 0; i < number; i++)
 	{ 
		fill(&person); 	
		fwrite(&person, sizeof(WORKER), 1, fp); 
	}
	
    fclose(fp); 
}

void print_db() 
{ 
	WORKER person;
  	FILE *fp; 
    char fname[FILENAMESIZE + 1];
    
    printf("Enter filename: ");
    fgets(fname, FILENAMESIZE, stdin);
    stripnewline(fname);
    
	if((fp = fopen(fname,"rb")) == NULL) {
		printf("Can't open %s\n", fname);
		return;
	}
	
   	while(fread(&person, sizeof(WORKER), 1, fp) > 0 ) 
		output(&person);
		
    fclose(fp); 
}

void retrieve_db()
{
	WORKER w;
	FILE *fp;
	char fname[FILENAMESIZE + 1], pname[NAMESIZE + 2];
	
 	printf("Enter file name: ");
    fgets(fname, FILENAMESIZE, stdin);
    stripnewline(fname);
    
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("Can't open %s\n", fname);
		return;
	}
	
	while(1)
	{ 
		printf("Which name? ('quit' to exit) "); 
		fgets(pname, NAMESIZE, stdin);
		stripnewline(pname);
		
		if (strcmp(pname, "quit") == 0) 
			break;
			
		while((fread(&w, sizeof(WORKER),1, fp)) > 0)
		{
			if(strcmp(pname, w.name) == 0) 
				output(&w); 	
		}
		fseek(fp, 0L, 0); 
	}
	
	fclose(fp); 
}
