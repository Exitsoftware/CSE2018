#include "hanoi.h"

int cnt = 0;
int main(){
	int n;
	n = get_n_from_user();
	assert(n > 0);


	move(n, 'A', 'B', 'C');

	return 0;
}