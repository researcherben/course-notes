/*
        circshift.c
*/
#include <stdio.h>

unsigned int rcshift(unsigned int num, int sz);
unsigned int lcshift(unsigned int num, int sz);
int wordlength(void);

main()
{
    unsigned int n = 0777;
    int num = 3;
    
    n = rcshift(n, num);
    printf("AFTER RIGHT:  %o\n", n);     /* %o is for octal  */
    
    n = lcshift(n,num * num);
    printf("AFTER LEFT:   %o\n", n);    
}

/*  Right Circular Shift */

unsigned int rcshift(unsigned int number, int size)
{
    int i;
    unsigned mask = ~0;
    mask = ~(mask >> 1);
    for( i = 0; i < size; i++) {
         if ( number & 01)
            number = (number >> 1) | mask;
         else
            number >>= 1;
    }
    return(number);
}

/*  Left Circular Shift  */

unsigned int lcshift(unsigned int number, int size)
{
    unsigned int r;
    r = rcshift(number, wordlength() - size);
    return(r);
}

int wordlength()
{
    unsigned int x = ~0;     /* all one bits */
    int count = 0;
    
    while( x != 0 )     /* any 1's left */
    {
        count++;                /* Yes          */
        x >>= 1;                /* right shift  */
    }
    return(count);        /* No 1's left  */
}
