#include <stdio.h>

int main()
{
	int anoNascimento, idade, qtdDias, qtdHoras, qtdMinutos, qtdSegundos;

	printf("Digite o ano do seu Nascimento: ");
	scanf_s("%d", &anoNascimento);

	idade = 2024 - anoNascimento;
	qtdDias = idade * 365;
	qtdHoras = qtdDias * 24;
	qtdMinutos = qtdHoras * 60;
	qtdSegundos = qtdMinutos * 60;

	printf("Sua idade é: %d, Quantidade de Dias: %d, Quantidade de Horas: %d, Quantidade de Minuto: %d, Quantidade de Segundos: %d", idade, qtdDias, qtdHoras, qtdMinutos, qtdSegundos);

	return 0;

}