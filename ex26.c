#include <stdio.h>
#include <conio.h>

int main()
{
	int counter, media, num;

	num = counter = media = 0;

	char let = 's';

	while (let == 's') {
		printf("Digite um numero inteiro: ");
		scanf_s("%d", &num);

		media = media + num;

		printf("Deseja digitar outro numero? (s/n) ");
		let = _getche();

		printf("\n");
		counter++;
	}
	printf("Media: %d \n", media);
    return 0;
}