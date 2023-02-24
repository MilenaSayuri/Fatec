//Crie um programa que leia 10 números inteiros do usuário, armazene-os em um vetor e imprima o maior número.

#include <stdio.h>

int main(){
    int vetor[10];
    int i, maior;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero:\n", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O maior numero digitado eh : %d", maior);
    return 0;
}