//Faça um programa que leia um vetor de inteiros com 10 elementos e imprima a média aritmética dos valores.

#include <stdio.h>

int main(){
    int vetor[10];
    int i, media;
    float soma;

    for(i = 0; i < 10; i++){
        printf("Digite 10 numeros:\n");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / 10;
    printf("A media dos valores eh de %d", media);
    return 0;
}