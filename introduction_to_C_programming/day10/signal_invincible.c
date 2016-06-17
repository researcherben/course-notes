#include <stdio.h>
#include <signal.h> // signal
#include <unistd.h> // gitpid
// neither ctrl-c (kill -2 <PID>) nor ctrl-backspace (kill -3 <PID>) kills this app 
// kill -9 <PID> does work
int fun(int n)
{
	printf("received signal number %d\n", n);
	printf("ha ha: Im invincible\n");
}
int main()
{
	int num = 0;
	printf("This is PID NUMBER %d\n", getpid());
	signal(SIGINT, fun); // ctrl-c
	signal(SIGQUIT, fun); // ctrl-backspace
	while(1)
	{
		printf("hello %d\n", num++);
		sleep(2);
	}
}
