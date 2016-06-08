//
//   Exercise 17-1
//
#include <stdio.h>
#include <string.h>
#include "employee.h"

int get_num_recs()
{
     char fname[FILENAMESIZE];
     long int size;
     int recs;
     FILE *fp;
     
     printf("Which file? ");
     fgets(fname, FILENAMESIZE, stdin);
     fname[strlen(fname) - 1] = '\0';		// Strip off the newline      

     fp = fopen(fname, "r");
     if(fp == NULL) {
          printf("Can't open %s\n", fname);
          return(-1);
     }
     
     fseek(fp, 0L, 2);
     size = ftell(fp);
     recs = (int) (size / sizeof(WORKER));
     printf("FILE %s has %d RECORDS\n", fname, recs);
     
     return recs;
}
