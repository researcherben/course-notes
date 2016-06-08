/*
        prototype.c
*/
#include <stdio.h>

int sum(int addend1, int addend2);   /* prototype for sum */

/*  Definition of main  */

main()
{
	int a, b = 10, c = 15;
	
	printf("Invoking sum\n");
	a = sum(b, c);
	
	printf("%d is sum of %d and %d\n", a, b, c);
}

/* 	Definition of sum  */

int sum(int first, int second)	
{
   	 int c;
   	 
	 c = first + second;
	 return(c);
}

