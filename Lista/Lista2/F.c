#include <stdio.h>
int tamanhoString(char * string){
	int i=0;
	while(string[i]!='\0')
		i++;
	return i;
}
int encontraPalavra(char frase[], char palavra[]){
	int cont=0, i, j=0;
	int tam1=tamanhoString(frase);
	int tam2=tamanhoString(palavra);
	for(i=0; i<tam1; i++){
			if(frase[i]==palavra[j]){
				cont++;
				j++;
				if(cont==tam2)
					return i;
			}
			else{
				cont=0;
				j=0;
			}
	}
	return 0;
}
				
int main(){
	char frase[10000];
	char palavra1[40], palavra2[40];
	int pos;
	scanf("%[^\n]", frase);
	scanf("%s", palavra1);
	scanf("%s", palavra2);
	int tam=tamanhoString(palavra1);
	pos = encontraPalavra(frase, palavra1);	
	for(int i=0; i<pos-tam+1; i++)
		printf("%c", frase[i]);
	printf("%s", palavra2);
	for(int i=pos+1; i<10000; i++){
		if(frase[i]=='\0')
			break;
		printf("%c", frase[i]);
	}
	printf("\n");
	return 0;
}
