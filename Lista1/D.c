#include <stdio.h>
int main(){
	int n, total=7;
	scanf("%d", &n);
	if(n/30){
		total+=20;
		if(n/100){
			total+=140;
			total+=((n-100)*5);
		}
		else
			total+=((n-30)*2);
	}
	else
		total+=(n-10);
	printf("%d\n", total);
	return 0;
}
