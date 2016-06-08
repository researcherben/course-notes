/*
        define.c
*/
#include <stdio.h>

#define	SUM 12

main()
{
	int x;
#ifdef SUM
	x = 20;
	printf("SUM is %d. x is %d.\n", SUM, x);
#else
	x = 100;
	printf("SUM doesn't exist. x is %d.\n", x);
#endif
}
