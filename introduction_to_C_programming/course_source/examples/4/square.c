/* 
	square.c
*/
#include <stdio.h>

#define SQUARE(VAL)    ((VAL) * (VAL))

main()
{	
	int r;
	int i = 5;
	int k = 4;
	int j = 2;
	
	r = SQUARE(k);
	printf("%d\n", SQUARE(i + j));	    /* 49 */
	printf("%d\n", SQUARE(i + j) + k);	/* 53 */
}
