#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int r;
	
	long clock;
        printf("number of seconds since Jan 1, 1970: %ld\n",clock);
	srand(time(&clock));
	for (int indx = 0; indx < 10; indx++)
	{
		r = rand() % 100;
		printf("%d\n", r);
	}
}

