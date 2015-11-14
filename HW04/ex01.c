#include <stdio.h>

int main(){
	int cnt_upper_letter = 0;
	char c;

	while((c = getchar()) != EOF){
		if(c >= 'A' && c <= 'Z') cnt_upper_letter++;
		
	}
	printf("Upper letter : %d\n", cnt_upper_letter);
	return 0;
}