#include "../inc/staticqueue.h"
#include <stdio.h>

void cria_fila(){
	f.p=0;
    f.u=0;
}
int fila_cheia(){
    return f.u==N;
}

int fila_vazia(){
    return f.u==f.p;
}

int adiciona_elemento(int n){
    if(fila_cheia())
        return 0;
    f.v[f.u++] = n;
    return 1;
}

int remove_elemento(){
    if(fila_vazia())
        return 0;
    return f.v[f.p++];
}

void mostra_fila(){
    printf("[");
    for(int i=f.p; i<f.u; i++)
        printf(" %d", f.v[i]);
    printf(" ]\n");
}
