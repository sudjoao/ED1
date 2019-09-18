#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, cont=0;
	char *a;
	char *b;
	scanf("%d", &n);
	a = malloc((n+1)*sizeof(char));
	b = malloc((n+1)*sizeof(char));
	scanf("%s", a);
	scanf("%s", b);
	for(i=0; i<n; i++)
		if(*(a+i) == *(b+i))
			cont ++;
	printf("%d\n", cont);
	free(a);
	free(b);
	return 0;
}
	
