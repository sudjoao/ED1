# Estruturas Lineares
## Listas Encadeadas

```
  -------     ------- 
 |       |   |       |
 |       |   |       |
  -------     -------
    dado        próx

typedef struct celula{
    int dado;
    struct celular *prox;
}celula;

           1                     2                     3                     4
  -------     -------   -------     -------   -------     -------   -------     ------- 
 |       |   |       | |       |   |       | |       |   |       | |       |   |       |
 |       |   |       | |       |   |       | |       |   |       | |       |   |       |
  -------     -------   -------     -------   -------     -------   -------     -------
    dado        próx     dado        próx      dado        próx      dado        próx

int v[5]; //alocação automática
int *v = malloc(5*sizeof(int)); //alocação dinâmica
```

1. Lista sem cabeça: celula *l = NULL;

2. Lista com cabeça: celula *l = malloc(sizeoff(celula));
                     
                     l->prox = NULL

Ex.: Faça uma função para imprimir o conteúdo de uma lista encadeada.

```
void imprimir_vetor(int v[], int n){
    for(int i=0; i<n; i++)
        printf("%d", v[i]);
}
Custo: O(n) - (linear)

void imprimir_lista(celula *l){
    for(celula *p=l->prox; p!=NULL; p=p->prox){
        printf("%d", p->dado);
    }
}
Custo: O(n) - (linear)

M[n][n]
for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
        printf("%d", M[i][j]);

Custo: O(n²)

char *str=malloc(n);    // O(n)
for(int i=0; i<n; i++)  //O(n)\
                                //O(n²)
    scanf("%s", str);   //O(n)/


Multiplicação de matrizes:

       n
Cij = Sum Aik * Bkj
      k=1

for(i=0; i<n; i++)
    for(j=0; j<n; j++)
        for(k=0; k<n; k++)
            c[i][j]+=a[i][k]*b[k][j];
Custo: O(n³)
,0



```