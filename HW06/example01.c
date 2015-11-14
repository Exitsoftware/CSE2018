#include <stdio.h>
#include "example02.h"

int a = 1, b = 2, c = 3;

int f(void);

int main(){

	printf("%d\n", f());
	printf("%3d%3d%3d\n", a, b, c);

	return 0;
}