#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H
typedef struct fila{
    int * v;
    int u;
    int p;
}fila;
fila f;
int N;
void cria_fila();
int adiciona_elemento(int n);
int remove_elemento();
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void mostra_fila();
int redimensiona_fila();
#endif