//desenvolva uma funcao recursiva que encontre e retorne o maior elemento de um vetor de inteiros de tamanho N

#include <stdio.h>

int maior(int v[], int tam, int indice){
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] > v[indice]) //compara dois elementos para descobrir qual eh o maior
            return maior(v, tam - 1, tam - 1);
        else
            return maior(v, tam - 1, indice);
    }
        
}

int main(){
    int vet[10] = {11,258,13,44,58,67,7,800,9,10};

    printf("Maior: %d\n", maior(vet, 10, 0));

    return 0;
}