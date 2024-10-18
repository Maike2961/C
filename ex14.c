#include <stdio.h>

int main()
{   
    float num1, num2, resultado;

    printf("Digite um numero: ");
    scanf_s("%f", &num1);


    printf("Digite um outro numero: ");
    scanf_s("%f", &num2);

    if (num1 > num2)
        resultado = num1 / num2;
    else
        resultado = num2 / num1;

    printf("O resultado e: %.2f \n", resultado);

    return 0;
}