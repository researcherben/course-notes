#include <stdio.h>
int add(int p[], int size)
{
	int i;
	int tot = 0;

	for ( i = 0; i < size; i++)
		tot += p[i];
	return tot;
}
int main()
{


	int vals[] = {2,3,4,5,6,7,8,9,9,10,30};
	int i;
	for ( i = 0; i < sizeof(vals)/sizeof(int) ; i++)
		printf("%d ", vals[i]);
	putchar('\n');
	int tot;
	tot = add(vals, sizeof(vals)/sizeof(int));
	printf("%d\n", tot);

	tot = add(vals, 5);
	printf("%d\n", tot);

	tot = add(vals + 5, 5);
	printf("%d\n", tot);

	tot = add(vals + 10, 5); // read beyond the array bounds. C doesn't check this limit
	printf("%d\n", tot);

}
/*
	char line[100];
	fgets(line, 100, stdin);

	char *p;
	p = line;
	p++;
	fgets(p, 100, stdin);
*/
