
#include <stdio.h>

int main()
{
    float despesa, lucro, receita;


    printf("Digite a receita da empresa: ");
    scanf_s("%f", &receita);

    printf("Digite a despesa da empresa: ");
    scanf_s("%f", &despesa);

    lucro = receita - despesa;

    printf("Esse e o resultado do lucro: %.2f \n", lucro);

    return 0;
}