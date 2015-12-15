#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int fibo(int n){
	if(n <= 1) return n;
	else return (fibo(n-1) + fibo(n-2));
}

int main(){

	int input;
	printf("input : ");
	scanf("%d", &input);


 
	for(int i = 0; i < input; i++) printf("%3d", fibo(i));
	printf("\n");


	return 0;
}