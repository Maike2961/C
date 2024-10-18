#include <stdio.h>

int main()
{
    float salarioBruto, taxaINSS, desconto, salarioLiquido;

    printf("Digite o seu salario Bruto: ");
    scanf_s("%f", &salarioBruto);

    if (salarioBruto <= 1317.07)
        taxaINSS = 8;
    else if (salarioBruto <= 2195.12)
        taxaINSS = 9;
    else
        taxaINSS = 11;

    desconto = salarioBruto * (taxaINSS / 100);
    salarioLiquido = salarioBruto - desconto;

    printf("Salario bruto:.... %.2f \n", salarioBruto);
    printf("Taxa INSS:.........%.2f \n", taxaINSS);
    printf("Desconto:..........%.2f \n", desconto);
    printf("Salario liquido:...%.2f \n", salarioLiquido);

    return 0;
}