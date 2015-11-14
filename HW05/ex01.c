#include <stdio.h>

int main(){
	int input;
	int cnt = 0;
	int sum = 0;
	float avg = 0;
	while(printf("input : ") && scanf("%d",&input) != EOF){
		cnt++;
		sum += input;
	}
	avg = (float)sum / (float)cnt;
	printf("\nAverage : %f\n", avg);
	
	return 0;
}