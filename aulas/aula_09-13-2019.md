# Algoritmo de busca
## Algoritmo de busca não recursivo
```
int busca_vetor(int v[], int n, int x){
    for(int i=0; i<n; i++){
        if(v[i]==n)
            return i;
    }
    return -1;
}
Custo: O(n)

int busca_vetor(int v[], int n; int x){
    int i;
    for(i=n-1; i>=0 && v[i]!=x; i--);
    return i;
}

celula* busca_lista(celula *l, int x){
    celula *p;
    for(p=l->prox; p!=NULL && p->dado!=x; p=p->prox);
    return p;
}
```

## Algoritmo de busca recursivo

```
int busca_vetor_rec(int v[], int n, int x){
    if(n==0) return -1;
    if(v[n-1]==x) return n-1;
    return busca_vetor_rec(v, n-1, x);
}

celula *busca_lista_rec(celula *p, int x){
    if(p==NULL) return NULL;
    if(p->dado==x) return p;
    return busca_lista_rec(p->prox, x);
}

celula *busca_lista_rec(celula *p, int x){
    if(p==NULL || p->dado==x) return p;
    return busca_lista_rec(p->prox, x);
}
```

## Inserir elemento no ínicio do vetor
```
void insere_inicio_vetor(int *v, int n, int x){
    for(int i=n; i>0; i--){
        v[i] = v[i-1];
    }
    v[0] = x;
}

void insere_inicio_lista(celula *l, int x){
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = l->prox;
    l->prox = novo;
}

void insere_posicao(celula *l, int i, int x){
    for(j=0; j<i-1 && p!=NULL; j++, p=p->prox);
    if(p!=NULL) insere_inicio_lista(p,x);
}
```

Obs: O custo para inserir um elemento numa lista é constantem bem mais barato que num vetor, que é linear. Em contrapartida, acessar um elemento em um vetor é O(1), enquanto numa lista, O(n).

Obs: sempre vai até o i-1 pois é necessário ir no elemento anterior(i-1) pra remover o próximo(i);
## Remover elementos do vetor

```
int remove_vetor(int v[], int n){
    int elem = v[0];
    for(int i=1; i<n; i++)
        v[i-1]=v[i];
    return elem;
}

int remove_inicio_lista(celula *l){
    celula *lixo = l->prox;
    l-prox = lixo->prox;
    int elem = lixo->dado;
    free(lixo);
    return elem;
}

int remove_lista(celula *l, int i){
    for(j=0; j<i-1 && p!=NULL; j++, p=p->prox);
    if(p!=NULL) return remove_inicio_list(p);
}
```