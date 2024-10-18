
#include <stdio.h>

int main()
{
	int numero, counter;

	numero = counter = 0;


	while (numero >= 0) {
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		counter++;
	}
	printf("%d \n", counter);
    return 0;
}