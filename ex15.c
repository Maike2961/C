#include <stdio.h>

int main()
{
	float receita, despesa;

	printf("Digite a receita: ");
	scanf_s("%f", &receita);


	printf("Digite a despesa: ");
	scanf_s("%f", &despesa);

	if (receita > despesa)
		printf("LUCRO");
	else
		printf("PREJUIZO");

    return 0;
}