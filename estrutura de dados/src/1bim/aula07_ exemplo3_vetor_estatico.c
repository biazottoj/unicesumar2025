#include <stdio.h>
#include <stdlib.h>

int main(void){
    //1. declaramos o vetor de inteiros
    int vetor[3];

    //2. percorremos um laço para preencher o vetor
    for (int i = 0; i < 3; i++ ){
        printf("Informe o %do numero: ", i);
        scanf("%d", &vetor[i]);
    }

    // 3. apresentamos o vetor
    for (int i = 0; i < 3; i++ ){
        printf("\nEste eh o %do numero: %d", i, vetor[i]);
    }
}