#include <stdio.h>
#include <stdlib.h>
int menorValor(int v[], int tam){
	int min=v[1];
	for(int i=2; i<tam; i++)
		if(min>v[i])
			min=v[i];
	return min;
}
int main(){
	int n, x, d;
	scanf("%d %d", &n, &x);
	int *v;
	v = calloc((x+1), sizeof(int));
	for(int i=0; i<n; i++){
		scanf("%d", &d);
		v[d]++;
	}
	int resposta = menorValor(v, x+1);
	printf("%d\n", resposta);
	free(v);
	return 0;
}
