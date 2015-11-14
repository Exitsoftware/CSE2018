#include <stdio.h>

int main(){
	int n;
	printf("숫자를 입력하세요. ");
	scanf("%d", &n);
	int result = 0;
	int result2 = 1;
	int i,j;
	printf("1 ");
	for(i = 0; i < n-1; i++){
		int tmp = result;
		result = result2;
		result2 += tmp;

		printf("%d ", result2);
	}
	printf("\n");
	return 0;
}