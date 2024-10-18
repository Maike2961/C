
#include <stdio.h>

int main()
{
	int quilometragemInicial, quilometragemFinal, distanciaPercorrida;

	printf("Digite a quilometragem inicial: ");
	scanf_s("%d", &quilometragemInicial);

	printf("Digite a quilometragem final: ");
	scanf_s("%d", &quilometragemFinal);

	distanciaPercorrida = quilometragemFinal - quilometragemInicial;

	printf("Essa foi a distancia percorrida: %d \n", distanciaPercorrida);

	return 0;
}