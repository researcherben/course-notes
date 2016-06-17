#include <stdio.h>
#include <string.h>
int main()
{
	char x[100] = "hello";
	char y[100] = "there";
	int r = 100;
	double z = 10.35;
	//
	//	hello100there
	//

	char result[100];
	sprintf(result, "%s%d%s%.2f\n", x,r,y,z);
	printf("%s\n", result);
}
/*
	strcat(x, " ");
	strcat(x, y);
	printf("%s\n", x);
*/
