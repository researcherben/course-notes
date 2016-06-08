/*  util.c  */

#include <string.h>

void stripnewline(char * str)
{
	int len = strlen(str);
	
	if (str[len - 1] == '\n')
	{
		str[len - 1] = '\0';
	}
}
