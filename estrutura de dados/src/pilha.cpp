#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAMANHO 5


int tamanho = 5;
int stack[TAMANHO];
int top = -1;



bool isEmpty(){
	/*bool isEmpty;
	
	 if(top == -1){
		isEmpty = true;
	} else{
		isEmpty = false;
	}
	
	return isEmpty;*/
	
	return top == -1;
	
}

// data = 10
void push(int data){
	
	if(top == TAMANHO - 1){
		printf("Pilha Cheia!");
		return;
	}
	
	top++;
	stack[top] = data;

}

int imprime_pilha(){
	
	if(isEmpty()){
		printf("Pilha Vazia");
		return;
	}

	int i;
	
	for(i = 0; i <= top; i++){
		printf("%d -> ", stack[i]);
	}
	
	printf("topo");
}

void topo(){
	if(isEmpty()){
		printf("Pilha Vazia!");
		return;
	}
	
	printf("\n\nTopo => %d", stack[top]);
}

int pop(){

	if(isEmpty()){
		printf("Pilha Vazia!");
		return;
	}
	
	int temp = stack[top];
	top--;
	return temp;	

}


main(){
	
	int dado;
	
	//printf("Informe um numero para a pilha: ");
	//scanf("%d", &dado);
	
	push(10);
	push(20);
	
	printf("Valor removido da pilha: %d", pop());
	printf("\nValor removido da pilha: %d", pop());
	
}
