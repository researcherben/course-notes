/*
    swap.c
*/
#include <stdio.h>

void swap(int *x, int *y);

main()
{
    int a = 10, b = 5;
    
    printf("BEFORE: %d %d\n", a, b);
    
    swap(&a, &b);        /* pass addresses */
    
    printf("AFTER:  %d %d\n", a, b);
}

void swap(int *x, int *y)    /* pointers */     
{                     
    int temp;
    
    temp = *x;    
    *x = *y;        
    *y = temp;
}
