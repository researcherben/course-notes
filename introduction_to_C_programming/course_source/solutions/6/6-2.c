//
//   Exercise 6-2
//
#include <stdio.h>

long power(int base, int expo);

main()
{
	long answer;
	int i;
	//
	//      TEST THE FUNCTION 'power()' FOR
	//      VARIOUS POWERS OF  5
	//
	for ( i = 0; i < 10; i++) {
		answer = power(5, i);
		printf("%15ld\n", answer);
	}
}

long power(int base, int exponent)
{
     long result = 1;
     int i;
     
     for (i = 0; i < exponent; i++)
          result *= base;
          
     return(result);
}
