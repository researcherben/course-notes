/* 
	main.c
*/
#include <stdio.h>

void fun1();
void fun2();

int x;

main()
{
	printf("MAIN: x = %d\n", x);
	fun1();
	printf("MAIN: x = %d\n", x);
	fun2();
	printf("MAIN: x = %d\n", x);
}
