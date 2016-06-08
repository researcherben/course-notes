//
//   Exercise 10-1: SPLIT THE FUNCTIONS FROM 9-2:
//
//   *****     largest.c     *****

#include "common.h"

int largest(int num[][COLS], int amount) 
{
     int large = num[0][0], i, j;
     
     for ( i = 0; i < amount; i++)
          for (j = 0; j < COLS; j++)
               if(num[i][j] > large )
                    large = num[i][j];
                    
     return(large);
}
