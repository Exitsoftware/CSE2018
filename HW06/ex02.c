#include <stdio.h>

int main(){

	int a, b;
	scanf("%d %d", &a, &b);

	while(1){
		int r;
		if((r = a % b) == 0){
			printf("%d\n", b);
			break;
		}
		a = b;
		b = r;
	}

	return 0;
}