#include <stdio.h>
#include <string.h>
int main()
{
	int x[10] = {5,5,5,5,5,5,5,5,5,5};
	memset(x,'\0',12);
	for (int i = 0; i < 10; i++)
		printf("%d\n", x[i]);
}
