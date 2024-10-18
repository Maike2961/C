
#include <stdio.h>

int main()
{
	int numA, numB;

	printf("Digite um numero: ");
	scanf_s("%d", &numA);

	printf("Digite segundo numero: ");
	scanf_s("%d", &numB);

	if (numA > numB)
		printf("Num A e maior que B");
	else			  
		printf("Num B e maior que A");

	return 0;
}