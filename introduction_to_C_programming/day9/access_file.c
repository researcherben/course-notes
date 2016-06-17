#include <stdio.h>
#include <stdlib.h> // exit
#include <errno.h> // errno
#include <string.h> // strcpy, strerror
//
//	file name should be given as argv[1]
//	i.e. the ifrst argument
//
//	Usage:    $ program filename
int main(int argc, char **argv){
	FILE *fp;
	extern int errno;
	char filename[100];
	if ( argc != 2 ){
		printf("enter your filename: ");
		gets(filename);
	}else{
		strcpy(filename, argv[1]);
	}
	printf("About to read from %s\n", filename);
	fp = fopen(filename, "r");
//	fp = fopen(filename, "w"); // errors if permission denied, ie /etc/passwd
	if ( fp == NULL ){
		printf("file opned failed\n");
		printf("ERRNO = %d\n", errno);
		printf("error message: %s\n", strerror(errno));
		exit(1);		
	}
	char line[100];
	while ( fgets(line, 100, fp ) ){
		printf("%s",line);
	}
}
