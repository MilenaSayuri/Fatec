// Crie um programa que leia 6 números inteiros do usuário, armazene-os em um vetor e imprima os números pares.

#include <stdio.h>

int main()
{
    int vetor[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d numero:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d, ", vetor[i]);
        }
    }
    return 0;
}