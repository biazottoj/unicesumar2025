#include <stdio.h>
#include <stdlib.h>
int incremento = 5; // Exemplo de alocação estática

int main(void){
    int *num_a, *num_b, *soma, exemplo_automática; // o * indica que estamos lidando com ponteiros (um endereço de memória)

    num_a = (int*) malloc(1); // a função malloc aloca 1 byte de memória e retorna o endereço para esse bloco  
    num_b = (int*) malloc(1);
    soma = (int*) malloc(1);

    if (num_a && num_b && soma){
        printf("Alocacao realizada com sucesso");

        printf("\nInforme o primeiro numero: ");
        scanf("%d", num_a); // não precisamos do "&", pois a função scanf() espera um endereço (isso é, um ponteiro)

        printf("\nInforme o segundo numero: ");
        scanf("%d", num_b);

        *soma = *num_a + *num_b; // quando utilizamos o operador "*", indicamos que queremos modificar os dados salvos naquela posição

        printf("%d", *soma);
    } else {
        printf("Falha na alocacao da memoria");
        return 1;
    }



}