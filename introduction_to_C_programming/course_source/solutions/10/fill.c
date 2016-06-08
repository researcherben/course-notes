//
//   Exercise 10-1: SPLIT THE FUNCTIONS FROM 9-2:
//
//   *****     fill.c     *****

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

void fill(int num[], int howmany)  
{
     int i;
     char line[20];
     
     for(i = 0; i < howmany; i++)
     {
          printf("   Enter number %d: ", i + 1);
          num[i] = atoi(fgets(line, 20, stdin));
     }
}


