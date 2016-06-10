#include <stdio.h> // EOF in linux is ctrl-D, on Windows it is ctrl-z
#define ISDIGIT(X) ((X) >= '0' && (X) <= '9') ? 1 : 0
int main(){
	int c;
	int count = 0;

	while(( c = getchar()) != EOF ) // if getchar returns -1, that's end of file. <stdio.h> contains the definition of EOF.
		if ( ISDIGIT(c) )
			count++;
	printf("There were %d digits\n", count);
}
