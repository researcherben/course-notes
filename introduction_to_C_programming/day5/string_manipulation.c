#include <stdio.h>
#include <string.h>
int main()
{
	int diff=0;
	char line[100] = "sailing";
	putchar(line[0]); //s
	putchar('\n');
	putchar("abcde"[0]); // string array is treated as an address which can be referenced by index
	putchar("abcde"[1]);
	putchar('\n');

	strcpy(line, "hello there"); // destination, source
	
	diff=strcmp(line, "hello there"); // string compare looks at 0th character, then first character, then second character; returns -1 or +1 based on the first character distinction
	printf("%d\n",diff); // 0
	diff=strcmp("hellk", "hello there");
	printf("%d\n",diff); // -1 indicates difference between k and o

}
