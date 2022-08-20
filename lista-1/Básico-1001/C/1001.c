#include <stdio.h>

int main(void)
{
    // Declarar variáveis A e B
    int A, B;

    // Capturar input do usuário
    scanf("%d %d", &A, &B);

    // Somar
    int X = A + B;

    // Output
    printf("X = %i\n", X);

    return 0;
}