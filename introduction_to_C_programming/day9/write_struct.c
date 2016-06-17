#include <stdio.h>
struct test
{
	int a;
	int b;
};
int main()
{
	int x = 123456789;
	printf("%d\n", x);
	
	FILE *fp;
	fp = fopen("myfile", "w");
	
	fwrite(&x, sizeof(int), 1, fp);

	struct test xx[3];
	xx[0].a = 10;
	xx[0].b = 20;
	xx[1].a = 100;
	xx[1].b = 200;
	xx[2].a = 1000;
	xx[2].b = 2000;
	fwrite(&xx, sizeof(struct test), 3, fp);
}
