#include <stdio.h>
int main(){
	int n, i,j, qtd_ast, qtd_esp;
	char ast='*', esp=' ';
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		qtd_ast = 2*i -1;
		qtd_esp = (n-i);
//		printf("%d %d\n", qtd_ast, qtd_esp);
		if(qtd_esp>0)
		printf("%*c", qtd_esp, esp);		
		for(j=0; j<qtd_ast; j++)
		printf("%c", ast);
		printf("\n");
	}
	return 0;
}
		
