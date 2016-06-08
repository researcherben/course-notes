//
//   Exercise 3-4
//
#include <stdio.h>

main()
{
	int start, end, sum;
	int i;
	
	start = 1;
	end = 100;
	sum = 0;
	
	for (i = start; i <= end; i++ )
	{
		sum += i;	
	}
	
	printf("Sum of ints from %d to %d is %d\n", start, end, sum);
}
