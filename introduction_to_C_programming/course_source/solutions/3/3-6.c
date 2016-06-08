//
//   Exercise 3-6
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
		if ( (i % 5) == 0 )
		{	
			sum += i;	
		}
		i++;
	}
	
	printf("Sum of ints div by 5 from %d to %d is %d\n", start, end, sum);
}
