#include <stdio.h>

int main()
{
	int num, somaPOS = 0, somaSUB = 0, counter;

	counter = 0;
	num = 1;

	while(num != 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &num);
		
		if (num >= 0){
			somaPOS = somaPOS + num;
		}
		else {
			somaSUB = somaSUB + num;
		}
	counter++;
	}
	printf("SomaPOS:......%d \n", somaPOS);
	printf("SomaSUB:......%d \n", somaSUB);
	printf("qtdDigitado:..%d \n", counter);
    return 0;
}