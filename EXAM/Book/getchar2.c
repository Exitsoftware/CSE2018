#include <stdio.h>

int main(){
	int c;
	while((c = getchar()) != EOF){
		printf("%c", c);
		// if(c == ' ') printf("?\n");
	}
	return 0;
}