#ifndef STATICQUEUE_H
#define STATICQUEUE_H
#define N 5
#include <stdio.h>
typedef struct fila{
    int v[N];
    int u;
    int p;
}fila;
fila f;
void cria_fila();
int adiciona_elemento(int n);
int remove_elemento();
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void mostra_fila();
#endif

