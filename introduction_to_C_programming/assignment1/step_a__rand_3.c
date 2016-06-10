#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXRAND 100
int main()
{
	long clock;
	srand(time(&clock));
	printf("%d\n", rand() % MAXRAND);
}

