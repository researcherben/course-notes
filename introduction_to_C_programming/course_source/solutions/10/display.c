//
//   Exercise 10-1: SPLIT THE FUNCTIONS FROM 9-2:
//
//   *****     display.c     *****

#include <stdio.h>
#include "common.h"

void display(int num[], int howmany) 
{
     int i;
     for(i = 0; i < howmany; i++)
          printf("%d ", num[i]);
     putchar('\n');
}

