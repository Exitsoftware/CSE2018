#include <stdio.h>
#define LIMIT 46

int main(void){
	long f0 = 0, f1 = 1, n, temp;
	printf("%7s%19s%29s\n%7s%19s%29s\n%7s%19s%29s\n", /* headings */
		" ", "Fibonacci", "Fibonacci",
		" n", " number", " quotient",
		"--", "---------", "---------");
	printf("%7d%19d\n%7d%19d\n", 0, 0, 1, 1); /* first two cases */
	n = 2;
	while (1) {
		switch (n) {
			case LIMIT+1:
			goto next;
			default:
			temp = f1;
			f1 += f0;
			f0 = temp;
			printf("%7ld%19ld%29.16f\n", n, f1, (double) f1 / f0);
			++n;
			break;
		}
	}
	next:
	return 0;
}