#include <stdio.h>

int fibo(int n){
	if(n <= 1) return n;
	else return (fibo(n-1) + fibo(n-2));
}

int main(){
	int num;
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		printf("%4d", fibo(i));
	}
	printf("\n");
	return 0;
}