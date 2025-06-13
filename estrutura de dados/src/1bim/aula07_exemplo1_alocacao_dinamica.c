#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *numero; // 2. definimos um ponteiro do tipo int para receber o endereço gerado pela malloc

    // 3. fazemos com que a variável número guarde o endereço
    numero = malloc(1); // 1. a função malloc retorna um endereço (ponteiro), então precisamos definir um ponteiro

    // 7. validar se foi possivel alocar a memoria.
    if (numero == NULL){
        printf("Erro ao alocar memoria!");
        return 1;
    }

//por que ponteiro na esquerda e nao na direta?
//clsposso alocar valores genericos?
    // 4. ler e apresentar o dado
    printf("Informe um número: ");
    scanf("%d", numero); // 5. não é necessário o "&", pois "numero" já cotem um endereço

    printf("\n O número informado eh: %d", *numero); // 6. usar operador * para acessar o dado salvo no endereco
}