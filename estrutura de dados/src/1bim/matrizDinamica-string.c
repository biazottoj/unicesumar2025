#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    char ***matriz;
    int row, col, leght;

    matriz = malloc(row * sizeof(char **));

    for(int i = 0; i < row; i++){
        matriz[i] = malloc(col * sizeof(char *));

        for (int j = 0; j < col; j++){
            matriz[i][j] = malloc(leght * sizeof(char) + 1);
        }
    }

    scanf("Joao", &matriz[0][0]);
    printf("%s", matriz[0][0]);
}
