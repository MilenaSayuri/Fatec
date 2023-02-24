//Crie um programa que leia 5 números inteiros do usuário, armazene-os em um vetor e imprima a soma desses números.

#include <stdio.h>

int main(){
    int vetor[5];
    int i, soma;
    
    for(i = 0; i < 5; i++){
        printf("Entre com o %d numero:\n", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("A soma dos numeros eh: %d", soma);
    return 0;
}
