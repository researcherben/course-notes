#include <stdio.h>
void fun(){
	static int var = 0; // this line only gets executed by compiler once
	var++;
	printf("%d\n", var);
}
int main(){
	int i;
	for ( i = 0; i < 10; i++)
		fun();
}
