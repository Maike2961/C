
#include <stdio.h>
#include <conio.h>

int main()
{
	int idade, codigo;
	int QtdSolteiros, QtdCasados, QtdDivorciados;
	float mediaSolteiro, MediaCasado, MediaDivorciado;
	char resposta = 's';

	QtdSolteiros = QtdCasados = QtdDivorciados = 0;
	mediaSolteiro = MediaCasado = MediaDivorciado = 0;

	while (resposta == 's') {
		printf("Digite a sua idade: ");
		scanf_s("%d", &idade);

		printf("Digite o Codigo de estado Civil: 1 - Solteiro; 2 - Casado; 3 - Divorciado: ");
		scanf_s("%d", &codigo);

		switch (codigo)
		{
		case 1:
			printf("Solteiro");
			mediaSolteiro = mediaSolteiro + idade;
			QtdSolteiros++;
			break;
		case 2:
			printf("Casado");
			MediaCasado = MediaCasado + idade;
			QtdCasados++;
			break;
		case 3:
			printf("Divorciado");
			MediaDivorciado = MediaDivorciado + idade;
			QtdDivorciados++;
			break;
		default:
			printf("Somente numeros de 1 a 3");
			break;
		}
		printf("\n");
		printf("Deseja Continuar (s/n) ?");
		resposta = _getch();
		printf("\n");
	}
	mediaSolteiro = mediaSolteiro / QtdSolteiros;
	MediaCasado = MediaCasado / QtdCasados;
	MediaDivorciado = MediaDivorciado / QtdDivorciados;
	printf("Media de Solteiros:....%.2f \n", mediaSolteiro);
	printf("Media de Casados:......%.2f \n", MediaCasado);
	printf("Media de Divorciados:..%.2f \n", MediaDivorciado);
    return 0;
}

