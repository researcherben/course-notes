#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r;
	
	int i;
	for ( i = 0; i < 10; i++)
	{
		r = rand();
		printf("%d\n", r);
	}
}

