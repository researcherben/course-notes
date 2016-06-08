/* print.c */
#include <stdio.h>
main( )
{
	int len = 5, wid = 10, tot;
	char letter = 'A';
	float average = 0.0;
	tot = len + wid;
	printf("%d+%d is %d\n",len,wid, tot); 
	printf("average =  %f\n", average);
	printf("letter = %c\n", letter);
}
