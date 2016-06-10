#include <stdio.h>
#define XTIMES2 x + x
int main()
{
	int a, x = 5;
	a = XTIMES2;
	printf("%d\n", a);

	int b;
	b = XTIMES2 * 6;
	printf("%d\n", b);
}
