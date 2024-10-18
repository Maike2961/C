#include <stdio.h>

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf_s("%d", &num);

	if (num > 8000)
		printf("o numero e de mais de 8 MIL");

	return 0;
}