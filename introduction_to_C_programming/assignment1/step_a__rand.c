#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int r;
	
	int i;
	long clock;
	srand(time(&clock));
	for ( i = 0; i < 10; i++)
	{
		r = rand() % 100;
		printf("%d\n", r);
	}
}
