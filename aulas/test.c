#include <stdio.h>
#include <stdlib.h>
char lenstr(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++);
        return i;
}
char * concatena(char *str1, char *str2){
	int tam1=lenstr(str1), tam2=lenstr(str2);
	int tam3=tam1+tam2;	
	int i, j=0;
	char *str3;
	str3=malloc((tam3+1)*sizeof(char));
	for(i=0; i<tam1; i++)
		str3[i]=str1[i];
	for(i; i<tam3; i++, j++)
		str3[i]=str2[j];
    str3[i]='\0';
	return str3;
}
int main(){
    char a[30], b[30];
    char *c;
    scanf("%s", a);
    scanf("%s", b);
    c = concatena(a,b);
    printf("%s\n", c);
    free(c);
}