//
//   Exercise 10-1: SPLIT THE FUNCTIONS FROM 9-2:
//
//   *****     10-1.c     *****

#include <stdio.h>
#include "common.h"

main()                        
{
     int numbers[ROW][COLS], i, ans;
     
     for (i = 0; i < ROW; i++)
     {
          printf("Entering for ROW %d ", i + 1);
          fill(numbers[i], COLS);
          display(numbers[i], COLS);
     }
     
     ans = largest(numbers, ROW);
     printf("largest is %d\n", ans);
}

