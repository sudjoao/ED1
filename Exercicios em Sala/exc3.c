#include <stdio.h>
void troca (int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
int main() {
	int a = 2, b = 3;
	troca(&a, &b);
	printf( "a = %d, b = %d\n", a, b );
	return 0;
}
