#include <stdio.h>
int main(){
	int n, m, p;
	int a, b;
	int pax=1, pay=1, pbx, pby;
	int i, passo, x, y, c=0;
	scanf("%d %d", &n, &m);
	pbx = n;
	pby = m;
	scanf("%d", &p);
	for(i=0; i<=p; i++){
		scanf("%d %d", &a, &b);
		if(a == 1)
			pay++;
		else if(a == 2)
			pay--;
		else if(a == 3)
			pax++;
		else if(a == 4)
			pax--;
		if(b == 1)
			pby++;
		else if(b == 2)
			pby--;
		else if(b == 3)
			pbx++;
		else if(b == 4)
			pbx--;
		if((pax == pbx && pay == pby) && c == 0){
			x  = pax;
			y = pay;
			passo = i+1;
			c = 1;}
		else if((pax>n || pay>m || pax<1 || pay<1) && c == 0){
			x = pax;
			y = pay;
			passo = i+1;
			c = 2;
		}
		else if((pbx>n || pby>m || pbx<1 || pby<1) && c == 0){
			x = pbx;
			y = pby;
			passo = i+1;
			c = 3;
		}
	}
	if(c == 1)
		printf("Encontraram-se na posicao (%d,%d) no passo %d\n", x, y, passo);
	else if(c == 2)
		printf("PA saiu na posicao (%d,%d) no passo %d\n", x, y, passo);
	else if(c == 3)
		printf("PB saiu na posicao (%d,%d) no passo %d\n", x, y, passo);
	else
		printf("Nao se encontraram\n");
	return 0;
}

