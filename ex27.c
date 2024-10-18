#include <stdio.h>
#include <conio.h>

int main()
{
	float nota1, nota2, nota3, media = 0;
	char resposta = 's';


	while(resposta == 's') {
		printf("Digite a primeira nota: ");
		scanf_s("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf_s("%f", &nota2);
		printf("Digite a terceira nota: ");
		scanf_s("%f", &nota3);

		media = (nota1 + nota2 + nota3) / 3;

		printf("MEDIA: %.2f \n", media);

		if (media >= 6)
			printf("APROVADO \n");
		else
			printf("REPROVADO \n");

		printf("Deseja digitar as notas de outros alunos ? (s/n) ");
		resposta = _getche();
		printf("\n");
	}
    return 0;
}