#include <stdio.h>

int main()
{
	int soma=0, sub=0, zero=0, num;


	for (int i = 0; i < 20; i++) {
		printf("Digite um numero: ");
		scanf_s("%d", &num);
		
		if (num == 0) {
			zero += 1;
		}
		else if (num > 0) {
			soma = soma + num;
		}
		else {
			sub = sub + num;
		}
	}
	printf("Soma:..............%d \n", soma);
	printf("Zeros digitados:...%d \n", zero);
	printf("Subtracao:.........%d \n", sub);
    return 0;
}