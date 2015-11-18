#include <stdio.h>

void reverse_get(){
	char c = getchar();
	if(c == '\n') return;
	reverse_get();
	printf("%c", c);

}
int main(){
	reverse_get();
	printf("\n");
	return 0;
}