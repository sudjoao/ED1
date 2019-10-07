#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void intochar(char *s, int n){
	int i;
	for(i=0; n!=0; i++){
		s[i] = n%10 + '0';
		n/=10;
	}
	s[i]='\0';
}
int degree9(char *s, int i, int size){
	int n = s[i] - '0';
	if(i==size-1)
		return n;
	return n+degree9(s, i+1, size);
}
	
int main(){
	char n[1001], aux[1001];
	int size, result, cont=0;
	while(scanf("%s", n), n[0]!='0'){
		strcpy(aux, n);
		while(1){
			size = strlen(n);
			result = degree9(n, 0, size);
			if(result%9==0)
				cont++;
			else
				break;
			if(result==9)
				break;
			intochar(n, result);
		}
		if(cont)
			printf("%s is a multiple of 9 and has 9-degree %d.\n", aux, cont);
		else
			printf("%s is not a multiple of 9.\n", aux);
		
		strcpy(n, "");
		cont=0;
	}
	return 0;
}
