// Faça um programa que leia um vetor de inteiros com 10 elementos e imprima o maior valor e a posição onde ele se encontra.

#include <stdio.h>

int main()
{
    int vetor[10];
    int i, maior, posicao;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("O maior numero eh %d na posição %d", maior, posicao);

    return 0;
}