#include <stdio.h>

int main(){

	int n, i, j;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j < 2*(n-1)+1; j++){
			if(j >= n-1-i && j <= n-1+i){
				printf("*");
			} 
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}

	return 0;
}