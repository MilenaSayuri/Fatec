// Criar um código em C para ler 10 números reais para um vetor, calcular a média deles e
// informar quantos estão acima desta média calculada.
#include <stdio.h>
int main()
{
    int soma, cont;
    int vet[10];
    float media;
    printf("Entre com 10 numeros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
    }
    media = soma / 10;
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] > media)
            cont++;
    }
    printf("Esta acima da media", cont);
    return 0;
}