#include <stdio.h>
void fun()
{
	int var = 0;
	var++;
	printf("%d\n", var);
}
int main()
{
	int i;
	for ( i = 0; i < 10; i++)
		fun();
}
