//***********************
//
//   THE getandput.c FILE
//
//***********************

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int array[MAX];

int get_max_pos()   // return the largest legal position
{
    return MAX - 1;      // i.e., one less than size of array
}

void put(int value, int pos)
{
     if ( pos >= MAX || pos < 0 ) {
          printf("%d is an illegal position\n", pos);
          exit(1);
     }

     array[pos] = value;
}

int get(int pos)
{
     if ( pos >= MAX || pos < 0 ) {
          printf("%d is an illegal position\n", pos);
          exit(1);
     }

     return(array[pos]);
}

