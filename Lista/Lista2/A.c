#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
	double tf = tB-tA;
	double vm;
	tf/=3600;
	vm=distancia/tf;
	return vm;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
	double vm;
	vm=calculaVelocidadeMedia(tA, tB, distancia);
	if(vm>velocidadeMaxima)
		return 1;
	return 0;
}

int main(){
	int ta, tb, multa;
	double distancia, velocidadeMaxima;
	scanf("%d %d %lf %lf", &ta, &tb, &distancia, &velocidadeMaxima);
	multa = levouMulta(ta, tb, distancia, velocidadeMaxima);
	if(multa)
		printf("Levou multa\n");
	else
		printf("Não levou multa\n");
	return 0;
}

