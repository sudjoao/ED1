#include <stdio.h>
int main(){
	int dia1, mes1, ano1, dia2, mes2, ano2, totaldias1, totaldias2, totaldias;
	scanf("%d %d %d", &dia1, &mes1, &ano1);
	scanf("%d %d %d", &dia2, &mes2, &ano2);
	if(dia1>31 || dia2>31 || dia1<1 || dia2<1)
		printf("data invalida\n");
	else if(mes1>12 || mes2>12 || mes1<1 || mes2<1)
		printf("data invalida\n");
	else if(ano1<0 || ano2<0)
		printf("data invalida\n");
	else{
		totaldias1 = dia1+(31*mes1)+(31*12*ano1);
		totaldias2 = dia2+(31*mes2)+(31*12*ano2);
		totaldias = totaldias2-totaldias1;
		if(totaldias1>totaldias2)
			printf("data invalida\n");
		else{
			printf("%d\n", totaldias/372);
			totaldias%=372;
			printf("%d\n", totaldias/31);
			totaldias%=31;
			printf("%d\n", totaldias); 
		}
	}
	return 0;
}
