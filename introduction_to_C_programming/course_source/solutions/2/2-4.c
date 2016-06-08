//   
//   Exercise 2-4
//
#include <stdio.h>

int sum_of_squares(int a, int b)
{
     int temp;
     temp = a * a + b * b;
     return(temp);
}

main()
{
    int f = 4, g = 10, sos;

    sos = sum_of_squares(f, g);
    printf("The sum of the squares of ");
    printf("%d and %d is %d\n", f, g, sos);
}


