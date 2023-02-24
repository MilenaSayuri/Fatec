// Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros.

#include <stdio.h>

int main(){
    int vetor1[] = {0, 2, 3, 6, 7, 5, 8, 4};
    int vetor2[] = {2, 0, 4, 1, 1, 3, 1, 5};
    int tamanho_vetor = sizeof(vetor1) / sizeof(vetor1[0]); //pego o tamanho no primeiro vetor, nesse caso eh 8
    int novo_vetor[tamanho_vetor];

    for(int i = 0; i < tamanho_vetor; i++){
        novo_vetor[i] = vetor1[i] + vetor2[i];
        printf("%d, ", novo_vetor[i]);
    }
    return 0;
}