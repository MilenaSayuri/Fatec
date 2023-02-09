// Criar um código em C que calcule o produto escalar de dois vetores, A e B (teste com 2 vetores de tamanho 5)
#include <stdio.h>
int main()
{
    int soma = 0, res = 0, i;
    int A[] = {1, 2, 3, 4, 5}, B[] = {2, -2, 0, 4, -2};
    for (i = 0; i < 5; i++)
    {
        res = A[i] * B[i];
        soma = soma + res;
    }
    printf("O produto escalar eh %d", soma);
    return 0;
}