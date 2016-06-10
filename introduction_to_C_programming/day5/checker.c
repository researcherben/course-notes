#include <stdio.h>
#define DIGITS 1
int check(char param[])
{
	int i;
	for ( i = 0; param[i] != '\0'; i++)
		if ( param[i] < '0' || param[i] > '9')
			return (! DIGITS);
	return( DIGITS );
}
int main()
{
	char line[100];
	printf("Enter a number! ");
	while( gets(line) )	// '\0'== the null charcater
	{
		int result;
		result = check(line);

		int v;
		if ( result == DIGITS )
		{
			printf("%s is all digits\n", line);
			v = atoi(line);
			printf("%d * %d = %d\n", v, v, v * v);
		}
		else
		{
			printf("%s is NOT all digits\n", line);
		}
		printf("Enter a number! ");
	}
}
