#include <stdio.h>
#include <math.h> // rand
#include <stdlib.h> // qsort
#include <string.h>
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
	//printf("%5d %5d\n", *p1, *p2);
	return *p2 < *p1;
}
int strcomp(const void *left, const void *right)
{ 
	char  * const *p2 = (char * const *) right;
	char  * const *p1 = (char * const *) left;
	//return strcmp(*(char * const *)left,*(char * const *)right);  
	return strcmp(*p1, *p2);  
}
int main(int argc, char **argv)
{
/*
	int x[10];

	int i;

	for ( i = 0; i < 10; i++)
		x[i] = rand() % 100;
	print(x, 10);
	qsort(x, 10, sizeof(int), comp);
	print(x, 10);
	printf("NOW FOR THE ARGS\n");
//*/
	qsort(argv + 1, argc - 1, sizeof(char *), strcomp);
	for ( int i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
}
