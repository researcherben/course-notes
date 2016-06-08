//
//        errs.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

main(int argc, char **argv)
{
	extern int errno;
	FILE *fp;
	
	fp = fopen(argv[1], "r");
	if ( fp == NULL ) 
	{
		printf("%s: %s\n", argv[0], strerror(errno));
		exit(errno);
	}
	
	exit(0);
}
