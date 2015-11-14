#include <stdio.h>

int main(){
	int i,j,k;
	for(i = 0; i < 3; i++){
		for(j = 1; j <= 9; j++){
			for(k = i*3+1; k <= i*3+3; k++){
				printf("%d X %d = %-10d", k, j, j*k);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}