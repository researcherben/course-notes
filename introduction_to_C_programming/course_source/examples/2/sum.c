/*
	sum.c
*/
#include <stdio.h>

main()
{
	int answer; 	
	int number1, number2;
	
	number1 = 10;
	number2 = 20;
	
	printf("Starting\n");
	answer = sum(number1, number2);
	printf("Sum is %d\n", answer);
	printf("Ending\n");
}

int sum( int a, int b)
{
	int c;
	
	c = a + b;
	return(c);
}
