//6.	Aloque dinamicamente um vetor cujo tamanho �
// definido pelo usu�rio e permita que ele preencha os valores.
// Depois, conte quantos n�meros pares foram informados pelo usu�rio;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void){
    int **matriz, linha, coluna;

    printf("Informe o numero de linhas: ");
    scanf("%d", &linha);

    printf("Informe o numero de colunas: ");
    scanf("%d", &coluna);

    matriz = (int**) malloc(linha * sizeof(int*));

    if(!matriz){
        printf("Erro ao criar Matriz[%d][%d]", linha, coluna);
        return 0;
    }

    printf("Matriz[%d][%d] criada com sucesso", linha, coluna);

    for (int i=0; i < linha; i++){
        matriz[i] = (int*) malloc(coluna * sizeof(int));
    }


    for(int i=0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nInforme Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

}


