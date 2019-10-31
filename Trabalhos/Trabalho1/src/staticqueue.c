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
    if(fila_vazia())
        printf("Fila está vazia\n");
    else{
        for(int i=0; i<N; i++)
            printf("%d ", f.v[i]);
        printf("\n");
        for(int i=0; i<=N; i++){
            if(i==f.p)
                printf("p ");
            if(i==f.u)
                printf("u ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
