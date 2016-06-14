#include <stdio.h>
int main()
{
	int x = 25;
	int *px;

	px = &x;
	printf("%p\n", &x); // address of x
	printf("%p\n", px); // px is the address of x
	printf("%d\n", *px); // *px is whatever x is
}
