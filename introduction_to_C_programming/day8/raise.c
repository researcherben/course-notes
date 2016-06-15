#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Use: $ raise base exponent
int main(int argc, char **argv)
{
	int i;
	if ( argc != 3 )
	{
		printf("Use of %s: base exponent\n", argv[0]);
		exit(1);
	}
	double base, exponent;
	base = atof(argv[1]);
	exponent = atof(argv[2]);
	printf("%f\n", pow(base, exponent));
}
