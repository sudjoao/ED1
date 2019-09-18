#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, soma=0;
	int *v, *v2;
	scanf("%d", &n);
	v = malloc(n*sizeof(int));
	v2 = malloc(n*sizeof(int));
	v2[0] = 0;
	for(int i=0; i<n; i++){
		scanf("%d", v+i);
		soma+=v[i];
		if(!i)
			v2[i] = v[i];
		else
			v2[i]=v[i]+v2[i-1];
	}
	int j=0;
	while(v2[j]!=soma/2 && j!=n)
		j++;
	free(v);
	free(v2);
	printf("%d\n", j+1);
	return 0;
}
	
