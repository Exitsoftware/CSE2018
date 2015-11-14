#include <stdio.h>

int main(){

	static int count = 0;	
	if(count == 17) return 0;

	printf("The universe is never ending! %d\n", count);
	count++;
	main();

}