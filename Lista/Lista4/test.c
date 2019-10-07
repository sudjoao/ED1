#include <stdio.h>
int main(){
	char a[5]="abcd";

	printf("%s\n", a);
	a[2]='\0';
	printf("%s\n", a);
	return 0;
}
