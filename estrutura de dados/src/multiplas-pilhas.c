#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAMANHO 5

typedef struct {
    int dados[TAMANHO];
    int topo;
} Pilha;

bool isEmpty(Pilha *p){
	return p->topo == -1;
}

void inicializar(Pilha *p){
    p->topo = -1;
}

void push(Pilha *p, int dado){

	if(p->topo == TAMANHO - 1){
		printf("Pilha Cheia!");
		return;
	}

	p->topo++;
	p->dados[p->topo] = dado;

}

int imprime_pilha(Pilha *p){

	if(isEmpty(p)){
		printf("Pilha Vazia");
		return;
	}

	int i;

	for(i = 0; i <= p->topo; i++){
		printf("%d -> ", p->dados[i]);
	}

	printf("topo");
}

int pop(Pilha *p){

	if(isEmpty(p)){
		printf("Pilha Vazia!");
		return;
	}

	int temp = p->dados[p->topo];
	p->topo--;
	return temp;

}

void topo(Pilha *p){
	if(isEmpty(p)){
		printf("Pilha Vazia!");
		return;
	}

	printf("\n\nTopo => %d", p->dados[p->topo]);
}


main(){

    Pilha p1,p2;

    inicializar(&p1);
    inicializar(&p2);

    push(&p2, 10);
    push(&p2, 20);
    push(&p2, 30);

    push(&p1, 15);
    push(&p1, 25);
    push(&p1, 35);

    topo(&p2);



}
