#include <stdio.h>
#include <unistd.h>

int main(){
	int x = 42;	
	int pid = fork();
	if (pid == 0)
 	{
		sleep(1);
		x = 12;	
		printf(" Hello, I'm the children \t%d \tand x is %d\n",getpid(),x);
	}
		else{
		printf(" my child is %d\n",pid);	
		x = 13;	
		printf(" Hello, I'm the mother \t\t%d\tand x is %d\n",getpid(),x);
		wait(NULL);
	}
	printf(" That's it %d\n", getpid());	
	return 0;
}
