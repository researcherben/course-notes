//
//   Exercise 17-3
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

main()
{
     WORKER first, last, p;
     FILE *fp;
     char fname[FILENAMESIZE];
     long size = sizeof(WORKER);

     printf("Enter name of file: ");
     fgets(fname, FILENAMESIZE, stdin);
     fname[strlen(fname) - 1] = '\0';		// Strip off the newline 
     
     fp = fopen(fname, "r+b");
     if(fp == NULL) {
           printf("can't open %s\n", fname);
           exit(1);
     }
     
     fread(&first, 1, size, fp);   // READ FIRST RECORD
     fseek(fp, -size, 2);          // SEEK TO LAST RECORD
     fread(&last, 1, size, fp);    // READ LAST RECORD
     fseek(fp, -size, 2);          // SEEK TO LAST RECORD
     fwrite(&first, 1, size, fp);  // WRITE FIRST RECORD
     fseek(fp, 0L, 0);        	   // SEEK TO BEGINNING
     fwrite(&last, 1, size, fp);   // WRITE LAST RECORD

     // PRINT REVISED DATA BASE

     while((fread(&p, sizeof(WORKER),1,fp)) > 0)
          printf("%s  %.2f  %c\n", p.name, p.pay, p.dept);
}
