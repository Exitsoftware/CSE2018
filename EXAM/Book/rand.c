#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int index = 0;
	index = (int)rand()%230;

	printf("%4d\n", index);
	return 0;
}