#include <stdio.h>
//	file name should be given as argv[1]
//	i.e. the first argument
//
//	Usage:    $ program filename
int main(int argc, char **argv){
	char filename[100];
	if ( argc != 2 ){
		printf("enter your filename: ");
		gets(filename);
	}else{
		strcpy(filename, argv[1]);
	}
	printf("About to read from %s\n", filename);
}
