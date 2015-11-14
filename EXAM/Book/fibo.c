#include <stdio.h>

int main(){
	int i, num, first = 0, second = 0, ans = 1;

	printf("input number\n");
	scanf("%d", &num);

	for(i = 0; i < num; i++){
		printf("%d\n", first);
		second = first + ans;
		first = ans;
		ans = second;
	}
	return 0;
}