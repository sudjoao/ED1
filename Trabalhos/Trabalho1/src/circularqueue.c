#include "../inc/circularqueue.h"
#include <stdio.h>
#include <stdlib.h>
N=10;
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
            for(i=0, j=N; i<f.u; i++, j++){
                f.v[j] = f.v[i];
                printf("esse foi o %d valor movido: %d\n", i, f.v[j]);
            }
            f.u+=N;
        }
        else{
            for(i=N-1, j=2*N-1; i>=f.p; i--, j--)
                f.v[j] = f.v[i];
            f.p = j+1;
        }  
    }
    N = 2*N;
    printf("O N é esse: %d\n", N);
    return 1;
}

int fila_cheia(){
    return (f.u+1)%N==f.p;
}

int fila_vazia(){
    return f.u==f.p;
}

int adiciona_elemento(int n){
    if(fila_cheia()){
        printf("redimensionando fila\n");
        redimensiona_fila();}
    if(f.p!=0 && f.u==N-1){
        f.v[f.u]=n;
        f.u=0;
    }
    else
        f.v[f.u++] = n;
    return 1;
}

int remove_elemento(){
    if(fila_vazia())
        return 0;
    return f.v[f.p++];
}

void mostra_fila(){
    int i;
    printf("[");
    for(i=0; i<N; i++)
        printf(" %2d", f.v[i]);
    printf(" ]\n");
    printf(" ");
    for(int i=0; i<=N; i++){
        if(i==f.p)
            printf("  p");
        if(i==f.u)
            printf("  u");
        else if(i!=f.p)
            printf("   ");
    }
    printf("\n");
}
