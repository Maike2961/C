#include <stdio.h>
#include <math.h>

int main()
{
	float volume;
	float raio = 3.57;
	float altura = 10;

	volume = 3.14159 * raio * raio * altura;

	printf("Esse e o volume da lata: %.2f", volume);
    return 0;
}