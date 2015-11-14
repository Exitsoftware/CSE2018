#include <stdio.h>

int main(){

	long res = 0;

	for(int i = 1; i <= 10; i++){
		int tmp = 1;
		for(int j = 0; j < 5; j++){
			tmp *= i;
			printf("%10d", tmp);
		}
		printf("\n");


	}
	return 0;
}