/*
	starter.c
*/
#include <stdio.h>

#define HOWMANY 5

void starter();

main()
{
	int i;
	
	for ( i = 0; i < HOWMANY; i++)
		starter();
}

void starter()
{
	/* 
		Static storage is initialized with 0
	 	by default.  Here we do it explicitly
	*/
	static int first = 0;
			
	if(first == 0)
	{
		first = 1;
		printf ("Only once\n");
	}
	else
	{
		printf ("All but the first time\n");
	}
	
	printf ("Every time\n");
}
