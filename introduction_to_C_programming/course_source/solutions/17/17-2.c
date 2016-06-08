//
//   Exercise 17-2
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

void print_rn()
{
     WORKER person;
     char fname[FILENAMESIZE];
     char line[100];
     int number;
     long int size = sizeof(WORKER);
     FILE *fp;
     
     printf("Which file? ");
     fgets(fname, FILENAMESIZE, stdin);
     fname[strlen(fname) - 1] = '\0';		// Strip off the newline 
     
     fp = fopen(fname, "r");
     if(fp == NULL) {
          printf("can't open %s\n", fname);
          return;
     }
     
     printf("Which record? ");
     number = atoi(fgets(line, 100, stdin));
     
     fseek(fp, (number - 1) * size, 0);
     fread(&person, 1, size, fp);
     printf("%s  %.2f  %c\n", person.name, person.pay, person.dept);
}
