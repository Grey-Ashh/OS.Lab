#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
		printf("HC: Hello from child.\n");
	else
	{
		printf("HC: Hello from parent.\n");
		wait(NULL);
		printf("CT: Child process terminated.\n");
	}
	printf("End.\n");
	return 0;
}

