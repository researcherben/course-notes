//  Exercise 3-11

#include <stdio.h>

main()
{
    int result = 1;
    int i = 1;

    while ( i <= 10 )
    {
        result *= i;
        printf("%d factorial = %d\n", i, result);
        i++;
    }
}

