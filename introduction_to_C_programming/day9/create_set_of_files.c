#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	FILE *fp;
	if ( argc != 3 )
	{
		printf("usage: %s stem howmany\n", argv[0]);
		exit(1);
	}
	int x = 0;
	int howmany = atoi(argv[2]);
	char stem[100];
	char name[100];
	strcpy(name, "");
	strcpy(stem, argv[1]);
	for ( int i = 0; i < howmany; i++)
	{
		sprintf(name, "%s%d",stem, x);
		printf("Making %s\n", name);
		fp = fopen(name, "w");
		x++;
		fclose(fp);
	}
}
