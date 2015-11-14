#include <stdio.h>

int main(){
	printf("::: A Table of Power :::\n");

	printf("Integer\t\tSquare\t\t3rd Power\t4th Power\t5th Power\n");
	printf("-------\t\t------\t\t---------\t---------\t---------\n");
	for(int i = 1; i <= 10; i++){
		for(int j = 0; j < 5; j++){
			int result = 1;
			for(int k = 0; k < j+1; k++){
				result *= i;
			}
			printf("%6d\t\t", result);
		}
		printf("\n");
	}
	return 0;
}