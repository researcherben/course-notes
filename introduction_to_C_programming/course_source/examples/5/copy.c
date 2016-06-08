/*
        copy.c - Copy standard input to standard output
*/
#include <stdio.h>

main()
{
	int c;
	
    c = getchar();        /* GET A CHAR    */
    while( c != -1)       /* WHILE NOT EOF */
    {
         putchar(c);      /* DISPLAY IT    */
         c = getchar();   /* GET ANOTHER   */
	}
}	 
