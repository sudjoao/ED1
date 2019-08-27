#include <stdio.h>
int main(){
    int n, i, qtd_ast, qtd_esp;
    char ast='*', esp=' ';
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        qtd_ast = 2*i -1;
        printf("%*c\n", qtd_ast, ast);
    }
    return 0;
}

