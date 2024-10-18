#include <stdio.h>

int main()
{
	float salarioHora, salarioBruto, salarioFamilia,salarioLiquido, valorFilhos;
	int  qtdHoras, qtdFilhos;

	printf("Digite o seu Salario Horas: ");
	scanf_s("%f", &salarioHora);

	printf("Digite a Quantidade de Horas Trabalhadas: ");
	scanf_s("%d", &qtdHoras);

	printf("Digite a quantidade de filhos: ");
	scanf_s("%d", &qtdFilhos);

	salarioBruto = salarioHora * qtdHoras;

	if (salarioBruto <= 700)
		valorFilhos = 8.5;
	else if (salarioBruto <= 1000)
		valorFilhos = 6.5;
	else
		valorFilhos = 2.5;

	
	salarioFamilia = valorFilhos * qtdFilhos;
	salarioLiquido = salarioBruto + salarioFamilia;

	printf("Valor Filhos:........%.2f \n", valorFilhos);
	printf("Salario Bruto:.......%.2f \n", salarioBruto);
	printf("Salario Familia:.....%.2f \n", salarioFamilia);
	printf("Salario Liquido:.....%.2f \n", salarioLiquido);
    return 0;
}