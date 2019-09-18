#include<stdio.h>
#include<stdlib.h>
int tamanhoString(char * string){
	int i=0;
	while(string[i]!='\0')
		i++;
	return i;
}
char maisculo(char c){
	if(c>96)
		return c-32;
	return c;
}
int letrasOrdenadas(char *string){
	int tam = tamanhoString(string);
	int cont = 1;
	for(int i=0; i<tam-1; i++){
		
		if(maisculo(string[i])<maisculo(string[i+1]))
			cont++;
		else
			break;
	}
	if(cont==tam)
		return 1;
	return 0;
}

int main(){
	int n;
	char **s;
	scanf("%d", &n);
	s = malloc(n*sizeof(char *));	
	for(int i=0; i<n; i++){
		s[i] = malloc(43*sizeof(char));
		scanf("%s", s[i]);
		if(letrasOrdenadas(s[i])){
			printf("%s: O\n", s[i]);
		}
		else
			printf("%s: N\n", s[i]);
		free(s[i]);
	}
	free(s);
	return 0;
}
		
		
