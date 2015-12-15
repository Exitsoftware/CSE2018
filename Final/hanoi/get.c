#include "hanoi.h"

int get_n_from_user(void){
	int n;

	printf("Welcome to hanoi tower\n");

	if(scanf("%d", &n) != 1 || n <= 1){
		printf("Error : You input wrong number\n");
		exit(1);
	}
	printf("\n");
	return n;
}