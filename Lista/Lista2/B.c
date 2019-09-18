#include <stdio.h>
#include <math.h>
int contaTamanho(int n){
	int cont=0;
	while(n){
		cont++;
		n/=10;
	}
	return cont;
}
int encaixa(int a, int b){
	int tam;
	tam = contaTamanho(b);
	if(a%(int)pow(10, tam)==b)
		return 1;
	return 0;
}
int segmento(int a, int b){
	int aux;
	if(b>a){
		aux=a;
		a=b;
		b=aux;
	}
	if(a!=b)
		while(a>b && !encaixa(a,b))
			a/=10;
	return encaixa(a,b);
}
