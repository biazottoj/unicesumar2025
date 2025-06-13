#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct No{
    int dado;
    struct No *proximo;
} No;

typedef struct Pilha{
    No *topo;
} Pilha;

void inicializar(Pilha *pilha){
    pilha->topo = NULL;
}

// true ==> pilha vazia
// false ==> pilha nao vazia
bool estaVazia(Pilha *pilha){
    return pilha->topo == NULL;
}

void empilhar(int dado, Pilha *pilha){
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

void imprimir(Pilha *pilha){
    No *atual = pilha->topo->proximo;

    printf("Topo -> ");
    printf("%d", pilha->topo->dado);

    while(atual != NULL){
        printf("\n        %d", atual->dado);
        atual = atual->proximo;
    }
}

int desempilhar(Pilha *pilha){
    int temp;

    if(estaVazia(pilha)){
        printf("Pilha Vazia");
        return -1;
    }

    No *aux = pilha->topo;
    pilha->topo = aux->proximo;

    temp = aux->dado;

    free(aux);

    return temp;
}

int pega_topo(Pilha *pilha){
    return pilha->topo->dado;
}

void liberar(Pilha *pilha){
    int temp;
    while(!estaVazia(pilha)){
        temp = desempilhar(pilha);
    }
}

int main()
{
    Pilha p1;
    int temp;

    inicializar(&p1);

    empilhar(5, &p1);
    empilhar(4, &p1);
    empilhar(6, &p1);
    empilhar(1, &p1);
    empilhar(10, &p1);
    empilhar(9, &p1);
    imprimir(&p1);

    temp = desempilhar(&p1);
    printf("\n%d removido da pilha\n\n", temp);

    temp = pega_topo(&p1);
    printf("\nTopo => %d\n\n", temp);
    imprimir(&p1);

    liberar(&p1);

    if(estaVazia(&p1)){
        printf("\n\nPilha Vazia");
    }
}
