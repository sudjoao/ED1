#include <stdio.h>
int main(){
	int n, hanoi, cont=0;
	while(scanf("%d", &n), n){
		cont++;
		hanoi = 1 + 2*(n-1);
		printf("Teste %d\n%d\n\n", cont, hanoi);
	}
	return 0;
}
