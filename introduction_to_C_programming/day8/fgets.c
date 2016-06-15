#include <stdio.h>
int main()
{
	char *pc;

	char line[100];
	pc = fgets(line, 100, stdin);

	if ( pc != NULL )
	{
		printf("%p\n", pc);
		printf("%p\n", line);
	}
}
