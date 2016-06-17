#include <stdio.h>
int main()
{
	int x = 123456789;
	printf("%d\n", x);
	
	FILE *fp;
	fp = fopen("myfile", "w");
	
	fwrite(&x, sizeof(int), 1, fp);
}
