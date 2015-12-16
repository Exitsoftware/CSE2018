#include <stdio.h>

int cnt = 0;

void hanoi(int n, char a, char b, char c){
	if(n == 1){
		cnt++;
		printf("%d Disk %d : %c move to %c \n", cnt, n, a, c);
	}
	else{
		hanoi(n-1, a, c, b);
		cnt++;
		printf("%d Disk %d : %c move to %c \n", cnt, n, a, c);
		hanoi(n-1, b, a, c);
	}
}

int main(){
	int num;
	printf("Hanoi : ");
	scanf("%d", &num);

	hanoi(num, 'A', 'B', 'C');

	return 0;
}