#include <stdio.h>
#include <signal.h>
// ctrl-backslash kills app
int main()
{
	int num = 0;
	signal(SIGINT, SIG_IGN); // ignore input
	while(1)
	{
		printf("hello %d\n", num++);
		sleep(1);
	}
}
