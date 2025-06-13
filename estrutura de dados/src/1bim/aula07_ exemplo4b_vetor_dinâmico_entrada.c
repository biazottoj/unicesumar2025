#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vetor, tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("\n Informe o %do numero: ", i);
        scanf("%d",vetor[i]);
        scanf("%d",vetor+1);
    }

}