#include <stdio.h>
#include <unistd.h>

int main(){
	int x = 42;	
	int pid = fork();
	if (pid == 0)
 	{
		x = 12;	
		printf(" the process id of child is %d\n",getpid());
		printf(" Hello, I'm the children and x is %d\n",x);
	}
		else{
		printf(" the process id of mother is %d\n",getpid());	
		x = 13;	
		printf(" Hello, I'm the mother and x is %d\n",x);
	}
	//printf(" That's it %d\n", getpid());	
	return 0;
}
