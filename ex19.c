#include <stdio.h>

int main()
{
	int cod;
	printf("Digite o codigo numerico: ");
	scanf_s("%d", &cod);

	switch (cod)
	{
	case 1:
		printf("Panela \n");
		break;
	case 2:
		printf("Chaleira \n");
		break;
	case 3:
		printf("Copo \n");
		break;
	default:
		printf("Cod Incorreto \n");
		break;
	}

    return 0;
}