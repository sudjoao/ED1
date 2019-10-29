#include "../inc/circularqueue.h"
#include <stdio.h>
#include <stdlib.h>
void cria_fila(){
    f.v = malloc(N*sizeof(int));
	f.p=0;
    f.u=0;
}

int redimensiona_fila(){
    int i, j;
    f.v = realloc(f.v, 2*N*sizeof(int));
    if(f.p>f.u)
    {
        if(N-f.p>f.u){
            for(i=0, j=N; i<f.u; i++, j++)
                f.v[j] = f.v[i];
            f.u+=N;
        }
        else{
            for(i=N-1, j=2*N-1; i>=f.p; i--, j--)
                f.v[j] = f.v[i];
            f.p = j+1;
        }  
    }
    N = 2*N;
    return 1;
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
