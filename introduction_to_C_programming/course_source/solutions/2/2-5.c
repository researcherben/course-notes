//   
//   Exercise 2-5
//
#include <stdio.h>

int sum_of_squares(int a, int b)
{
     int temp;
     temp = a * a + b * b;
     return(temp);
}

int is_right(int a, int b, int c)
{
     return (sum_of_squares(a, b) == c * c ? 1 : 0 );
}

//
//	OR using the 'if' statement
//
//  int is_right(int a, int b, int c)
//  {
//       if(sum_of_squares(a, b) == c * c)
//            return(1);
//       else
//            return(0);
//  }


main()
{
    int side1 = 3, side2 = 4, hypotenuse = 5;

    printf ("%d, %d, and %d are ", side1, side2, hypotenuse);
    
    if ( is_right(side1, side2, hypotenuse) == 0 )
    {
        printf("NOT ");
    }
        
    printf("the sides of a right triangle\n");
}
