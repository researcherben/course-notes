#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int r;
	
	int i;
	long clock;
        printf("number of seconds since Jan 1, 1970: %ld\n",clock);
	srand(time(&clock));
	for ( i = 0; i < 10; i++)
	{
		r = rand() % 100;
		printf("%d\n", r);
	}
}

