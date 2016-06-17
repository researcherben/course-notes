#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
int main(int argc, char **argv)
{
	struct stat stbuf;
	while( --argc > 0 ) {
		if (stat(*++argv,&stbuf) == -1)
			printf("%s NOT a file\n", *argv);
		else {
			char semi[100];
			strcpy(semi, *argv);
			strcat(semi, ":");
			printf("%-15s", semi);
			printf("\n\tSIZE:  %ld ", stbuf.st_size);
			printf("\n\tPERMS: %o", stbuf.st_mode & 0777);
			printf("\n\tUID:   %d", stbuf.st_uid);
			printf("\n\tLAST MOD: %s", ctime(&stbuf.st_mtime));
		}
	}
}
