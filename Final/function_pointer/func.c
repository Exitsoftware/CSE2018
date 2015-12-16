#include <stdio.h>




int a(int k){
	return k*k;
}

int b(int k){
	return k*k*k;
}

int c(int k){
	return k*k*k*k;
}

int (*p[3])(int) = {a,b,c};

int main(){
	int a,y,z,i;

	scanf("%d",&i);
	z = p[i-1](4);
	printf("%d\n", z);

	return 0;
}