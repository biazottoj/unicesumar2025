#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de um nó da lista encadeada
typedef struct No {
    int dado;
    struct No* proximo;
} No;

// Define a estrutura de uma lista encadeada (guarda o início)
typedef struct Lista {
    struct No* inicio;
} Lista;

void inicializar(struct Lista* lista) {
    lista->inicio = NULL;
}

void inserirInicio(int valor, struct Lista* lista) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
}

void inserirPosicao(struct Lista* lista, int valor, int posicao) {
    struct No* temp;
    int i;

    if (posicao == 0 || lista->inicio == NULL) {
        inserirInicio(valor, lista);
        return;
    }

    // Objetivo do for é encontrar o elemento anterior à posição
    // que o novo elemento vai ser inserido
    temp = lista->inicio;
    for (i = 0; i < posicao - 1 && temp->proximo != NULL; i++) {
        temp = temp->proximo;
    }

    struct No* novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->proximo = temp->proximo;
    temp->proximo = novo;
}

void inserirFim(struct Lista* lista, int valor) {
    struct No* temp;
    temp = lista->inicio;

    if (lista->inicio == NULL) {
        inserirInicio(valor, lista);
        return;
    }

    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }

    struct No* novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->proximo = NULL;
    temp->proximo = novo;
}

void removerInicio(struct Lista* lista) {
    if (lista->inicio == NULL) return;

    struct No* temp = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    free(temp);
}

void removerPosicao(struct Lista* lista, int posicao) {
    if (lista->inicio == NULL) return;

    if (posicao == 0) {
        removerInicio(lista);
        return;
    }

    struct No* temp = lista->inicio;
    int i;
    for (i = 0; i < posicao - 1 && temp->proximo != NULL; i++) {
        temp = temp->proximo;
    }

    if (temp->proximo == NULL) return;

    struct No* apagar = temp->proximo;
    temp->proximo = apagar->proximo;
    free(apagar);
}

void imprimir(struct Lista* lista) {
    struct No* temp = lista->inicio;

    while (temp != NULL) {
        printf("%d -> ", temp->dado);
        temp = temp->proximo;
    }

    printf("NULL\n");
}

int main(int argc, char *argv[]) {
    struct Lista lista1;
    inicializar(&lista1);

    inserirInicio(6, &lista1);
    inserirInicio(4, &lista1);
    inserirInicio(3, &lista1);
    inserirInicio(2, &lista1);
    inserirPosicao(&lista1, 5, 3);
    inserirPosicao(&lista1, 1, 0);
    inserirFim(&lista1, 7);

    printf("Lista inicial:\n");
    imprimir(&lista1);

    removerInicio(&lista1);
    removerPosicao(&lista1, 2);

    printf("Lista após remoções:\n");
    imprimir(&lista1);
}
