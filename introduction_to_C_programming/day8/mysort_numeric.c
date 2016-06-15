#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void print(int *n, int size)
{
	int i;
	for ( i = 0; i < size; i++)
		printf("%3d ", n[i]);
	putchar('\n');
}
int comp(const void *left, const void *right)
{
	int *p1 = (int *) left;
	int *p2 = (int *) right;
	printf("%5d %5d\n", *p1, *p2);
	return *p2 < *p1;
}
int main()
{
	int x[10];

	int i;

	for ( i = 0; i < 10; i++)
		x[i] = rand() % 100;
	print(x, 10);
	qsort(x, 10, sizeof(int), comp);
	print(x, 10);
}
