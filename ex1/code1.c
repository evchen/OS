#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

char global [] = "this is a global string";

int main() {
	int pid = getpid();
foo:
	printf("process id: %d\n", pid);
	printf("global string: %p\n", &global);
	printf("the code : %p\n", &&foo);

	printf("\n\n /proc/%d/maps \n\n", pid);

	const int read_only = 123456;

	printf("read only: %p \n", &read_only);

	char command[50];
	sprintf(command, "cat /proc/%d/maps", pid);
	system(command);

	return 0;

}
