#include <stdio.h>
#include <ctype.h>


int main(){

	char c, name[100000];
	int i, sum = 0;

	printf("\n Hi! what is your name?\n");

	for(i = 0; (c = getchar()) != '\n'; ++i){
		name[i] = c;
		if(isalpha(c)) sum += c;
	}

	name[i] = '\n';
	printf("Nice to meet you %s sum : %d\n", name, sum);
	for(--i; i >= 0; --i)
		putchar(name[i]);
	printf("??\n");








	return 0;
}