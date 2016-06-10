#include <stdio.h>
#define DIGITS 1
int check(char param[]) // pass address of an array; the array is of characters
{
	printf("address INSIDE FUNC: %p\n", param);
	printf("sizeof param is %ld\n", sizeof(param)); // size of address, not array
	printf("index 0: %c\n", param[0]);
	printf("index 1: %c\n", param[1]);
	return 0;
}
int main()
{
	char line[100]; // sizeof
	printf("address IN MAIN: %p\n", line);
	printf("sizeof line is %ld\n", sizeof(line));
	printf("Enter a number! ");
	gets(line);	// terminate on '\0'== the null charcater
	
	int result;
	result = check(line);

}
