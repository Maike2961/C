#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i = 0; i <= 10000; i++) {
        soma = soma + i;
        printf("%d \n", soma);
    }
    printf("Soma: %d \n", soma);
    return 0;
}