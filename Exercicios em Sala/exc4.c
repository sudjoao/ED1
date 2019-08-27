#include <stdio.h>
int main() {
	int x;
	int *p = &x;
	int **q = &p;
	x = 10;
	printf("%d\n",**q);
	return 0;
}
