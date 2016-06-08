/* 
	conditional.c
*/
#include <stdio.h>

main()
{
#ifdef DEBUG
    printf("Debugging\n");
#elif PRINT_ARRAY
    printf("Printing arrays\n");
#endif			
}
