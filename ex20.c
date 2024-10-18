#include <stdio.h>

int main()
{
    printf("Contando ate 10 \n");
    for (int i = 0; i <= 10; i++) {
        printf("%d \n", i );
    }

    printf("Contando de 10 ate 0 \n");
    for (int j = 10; j >= 0; j--) {
        printf("%d \n", j);
    }
    return 0;
}