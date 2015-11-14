#include <stdio.h>

float sum(float a, float b){
	return a+b;
}

float sub(float a, float b){
	return a-b;
}

float mut(float a, float b){
	return a*b;
}

float div(float a, float b){
	return a/b;
}

int main(){
	float a,b;
	printf("두 수를 입력하세요 ");

	scanf("%f %f", &a, &b);
	if((int)sum(a,b) == sum(a,b)) printf("덧셈 : %.0f\n", sum(a,b));
	else printf("덧셈 : %11.1f\n", sum(a,b));
	printf("뺄셈 : %.2f\n", sub(a,b));
	printf("곱셈 : %.2f\n", mut(a,b));
	printf("나눗셈 : %.2f\n", div(a,b));

	return 0;
}