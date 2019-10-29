#include "../inc/staticqueue.h"
int main(){
	int n, n_elem, elem, cont=0, rem_elem=0;
	cria_fila();
	while(n!=5){
		printf("Digite qual operação você deseja fazer na estrutura de dados fila:\n");
		printf("1 - Inserir n elementos na fila\n");
		printf("2 - Remover n elementos na fila\n");
		printf("3 - Imprimir fila\n");
		printf("4 - Reiniciar fila\n");
		printf("5 - Sair\n");
		scanf("%d", &n);
		switch(n){
			case 1:
				printf("Digite a quantidade de elementos que quer inserir na fila:\n");
				scanf("%d", &n_elem);
				for(int i=0; i<n_elem; i++){
					printf("Digite o %d elemento que irá inserir:\n", i+1);
					scanf("%d", &elem);
					if(elem>=0 && elem<=999)
						if(adiciona_elemento(elem))
							cont++;
				}
				printf("%d elementos foram adicionados\n", cont);
				cont = 0;
				break;
			case 2:
				printf("Digite a quantidade de elementos que quer remover da fila:\n");
				scanf("%d", &n_elem);
				for(int i=0; i<n_elem; i++)
					if(rem_elem = remove_elemento(), rem_elem){
						printf("Elemento removido: %d\n", rem_elem);
						cont++;
					}
				printf("%d elementos foram removidos\n", cont);
				cont=0;
				break;
			case 3:
				mostra_fila();
				break;
			case 4:
				cria_fila();
				break;
			default:
				break;
		}
	}
	return 0;
}
