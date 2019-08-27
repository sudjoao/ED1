#include <stdio.h>
void printPiramide1(int n){
	int i, j;
		for(i=0; i<n; i++){
			printf("%02d", i+1);
			for(j=1; j<=i; j++)
				printf(" %02d", i+1);
			printf("\n");
		}
}
void printPiramide2(int n){
	int i, j;
	for(i=0; i<n; i++){
		printf("01");
		for(j=1; j<=i; j++)
			printf(" %02d", j+1);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	printPiramide1(n);
	printf("\n");
	printPiramide2(n);
	return 0;
}
