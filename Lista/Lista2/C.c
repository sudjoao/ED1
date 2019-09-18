#include <stdio.h>
#include <string.h>
struct tipoBanda{
	char nome[80];
	int ano;
};

struct tipoShow{
	char nome[80];
	int qtd;
	struct tipoBanda bandas[100];
};

int tamanhoString(char * string){
	int i=0;
	while(string[i]!='\0')
		i++;
	return i;
}

int comparaString(char * string1, char * string2){
	int i, j, tamanho1, tamanho2, cont=0;
	tamanho1 = tamanhoString(string1);
	tamanho2 = tamanhoString(string2);
	if(tamanho1 != tamanho2)
		return 0;
	for(i=0; i<tamanho1; i++){
		if(string1[i] == string2[i])
			cont++;
		else
			break;
	}
	if(cont==tamanho1)
		return 1;
	return 0;
}


void pesquisarNomeBanda(char pesquisa [80], struct tipoShow shows[50], int n){
	int i, j, cont=0;
	for(i=0;i<n; i++)
		for(j=0; j<shows[i].qtd; j++){
			if(comparaString(pesquisa, shows[i].bandas[j].nome)){
				printf("%s - ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
				cont++;
			}
		}
	if(cont==0)
		printf("Banda nao cadastrada\n");
}
