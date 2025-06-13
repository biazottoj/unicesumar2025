#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vetor, tamanho;
    printf("Informe o comprimento do vetor: ");
    scanf("%d",&tamanho);

    vetor = malloc(tamanho);

    for (int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
        //*(vetor + 1) = rand() % 100;
    }

    for (int i = 0; i < tamanho; i++){
        printf("\n%do numero: %d", i, vetor[i]);
        //printf("\n%do numero: %d", i, *(vetor + 1));
    }
}