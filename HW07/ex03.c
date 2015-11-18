#include <stdio.h>

void func(int n){
	char s[10000];
	scanf("%s", s);

	int len = 0;
	while(s[len] != '\0'){
		len++;
	}
	int stack[100000];
	int top = -1;
	int cnt = 0;
	for(int i = len-1; i >= 0; i--){
		if(cnt % 3 == 0 && cnt != 0) stack[++top] = ',';
		stack[++top] = s[i];
		cnt++;
	}

	for(int i = top; i >= 0; i--){
		putchar(stack[i]);
	}



	
	
	
}

int main(){
	func(1);
	printf("\n");


	return 0;
}