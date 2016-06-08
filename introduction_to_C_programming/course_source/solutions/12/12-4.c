//
//   Exercise 12-4
//
#include <stdio.h>

main(int argc, char **argv)
{
     int i;
     int sum = 0;
     char *s;

     for ( i = 1; i < argc; i++){
          s = argv[i];
	  while ( *s ) {
		if (*s >= '0' && *s <= '9')
			sum += *s - '0';
		s++;
	   }
     }
     printf("sum is %d\n", sum);
}
