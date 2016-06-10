#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r;
	for (int indx = 0; indx < 10; indx++)
	{
		r = rand();
		printf("%d\n", r);
	}
}

