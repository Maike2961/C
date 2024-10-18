#include <stdio.h>

int main()
{
    int numero, soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf_s("%d", &numero);
        soma = soma + numero;
    }
    printf("Esse e o numero: %d \n", soma);
    return 0;
}