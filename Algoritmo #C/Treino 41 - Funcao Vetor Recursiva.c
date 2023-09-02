//Faca uma funcao recursiva para calcular a soma de todos os valores de um vetor de inteiros

#include <stdio.h>

int soma(int v[], int tam){ // tam eh a quantidade de elementos dentro do vetor
    if(tam == 0)
        return 0;
    else
        return v[tam - 1] + soma(v, tam - 1);
}


int main(){
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Soma: %d\n",soma(vet, 3));

    return 0;
}