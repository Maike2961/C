#include <stdio.h>

int main()
{
    float raio, volume, altura;

    printf("Digite o valor do Raio: ");
    scanf_s("%f", &raio);

    printf("Digite o valor da altura: ");
    scanf_s("%f", &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("Esse e o valor do Volume da lata: %.2f", volume);
    return 0;
}