#include <stdio.h>

int main(){
	foo:
	printf("foo: %p \n", &&foo);
	bar:
	printf("bar: %p \n", &&bar);
	for( ;;){}
	return 0;

}