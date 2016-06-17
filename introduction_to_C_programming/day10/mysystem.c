#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	system("date");
	system("ls");
	system("date");

	char line[100];

	strcpy(line, "cp ");
	strcat(line, "/etc/passwd ");
	strcat(line, ".");
	printf("about to execute %s\n", line);
	system(line);
}
