#include <stdio.h>


int fibo(int n, int prev, int prev2){
	if(n <= 1) return prev + prev2;
	int res = prev + prev2;
	return fibo(n-1, res, prev);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n,1,0));
	return 0;
}