#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf_s("%d", &valor);

    if (valor != 1000)
        printf("e diferente de MIL");
    else
        printf("e igual a MIL");

    return 0;
}
