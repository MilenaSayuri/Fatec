// Criar um codigo em c para ler 10 numeros inteiros e mostrar qual eh o maior e o menor valor dentre os
// elementos do vetor.
#include <stdio.h>
int main()
{
    int i, maior, menor;
    int vet[] = {3, 7, 4, 2, 8, 9, 5, 0, 2, 1};
    menor = vet[0];
    maior = vet[0];
    for (i = 1; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    if (vet[i] < menor)
    {
        menor = vet[i];
    }
    printf("Meu maior numero eh %d e meu menor numero eh %d", maior, menor);
    return 0;
}