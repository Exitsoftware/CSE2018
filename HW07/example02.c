#include <stdio.h>
int main(){
	double a[2], *p, *q;
	p = a;
	q = p + 1;
	printf("%d\n", q - p); /* 1 is printed */ 
	printf("%d\n", (int)q - (int)p);/* 8 is printed */
}