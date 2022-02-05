#include <stdio.h>

void fibUsingGoto(int N)
{
	int a = 0, b = 1, sum = 0;
lableFib:
	if (N != 0) {
		printf(" %d", a);
		sum = a + b;
		a = b;
		b = sum;
		N--;
		goto lableFib;
	}
}

int main()
{
	int N = 10;
	fibUsingGoto(N);
	return 0;
}
