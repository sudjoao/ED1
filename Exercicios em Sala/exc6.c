#include<stdio.h>
#include<stdlib.h>
int *primos (void) {
    int *v;
	v = malloc(3*sizeof(int));
    v[0] = 1009; v[1] = 1013; v[2] = 1019;
    return v;
}

int main(){
    int *v;
    v = primos();
    for(int i=0; i<3; i++)
        printf("%d\n", v[i]);
	free(v);
    return 0;
}
