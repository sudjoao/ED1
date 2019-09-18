#include <stdio.h>
#include <stdlib.h>
int tamanhoString(char * string){
    int i=0;
    while(string[i]!='\0')
        i++;
    return i;
}
int encontraPalavra(char *frase, char *palavra, int tam, int i){
	int cont=0, j=i+tam, k=0;
	for(i; i<j; i++){
//		printf("%c %c\n", frase[i], palavra[i]);
		if(frase[i]==palavra[k]){
			cont++;
		}
		else
			return 0;
		if(cont==tam)
			return cont;
		k++;
	}
	printf("%d\n", cont);
	return 0;
}

int main(){
	char frase[10000], palavra1[40], palavra2[40];
	scanf("%[^\n]", frase);
    scanf("%s", palavra1);
    scanf("%s", palavra2);
	int tamfrase=tamanhoString(frase), tam1=tamanhoString(palavra1), tam2=tamanhoString(palavra2);
	for(int i=0; i<tamfrase; i++){
		if(encontraPalavra(frase, palavra1, tam1, i)){
			printf("%s", palavra2);
			i+=tam1-1;
		}
		else
			printf("%c", frase[i]);
	}
	printf("\n");
	return 0;
}
