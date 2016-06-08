//
//   Exercise 3-5
//
#include <stdio.h>

main()
{
	int start, end, sum;
	int i;
	
	start = 1;
	end = 100;
	sum = 0;
	i = start;
	
	while ( i <= end )
	{
		sum += i;	
		i++;
	}
	
	printf("Sum of ints from %d to %d is %d\n", start, end, sum);
}
