
#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, media;

	printf("Digite a nota 1: ");
	scanf_s("%f", &nota1);

	printf("Digite a nota 2: ");
	scanf_s("%f", &nota2);

	printf("Digite a nota 3: ");
	scanf_s("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("Essa e a media das notas: %.2f", media);

    return 0;
}
