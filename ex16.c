#include <stdio.h>

int main()
{
    float salarioAntigo, taxaReajuste, SalarioNovo;

    printf("Digite o seu Salario Atual: ");
    scanf_s("%f", &salarioAntigo);

    if (salarioAntigo <= 1000)
        taxaReajuste = 15;
    else if (salarioAntigo <= 2000)
        taxaReajuste = 10;
    else
        taxaReajuste = 5;

    SalarioNovo = salarioAntigo + (salarioAntigo * (taxaReajuste / 100));
    
    printf("Salario Novo: %.2f \n", SalarioNovo);
    printf("Salario Velho: %.2f \n", salarioAntigo);
    printf("Taxa do Reajuste: %.2f%% \n", taxaReajuste);

    return 0;
}