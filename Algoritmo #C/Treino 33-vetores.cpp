//Como ter um vetor sem repetição de numeros

#include <stdio.h>
#define tamanho 12 //tamanho do vetor original

int main(){

int antigo[tamanho] = {1, 1, 1, 2, 3, 3, 4, 5, 7, 8, 9, 10}; // vetor original
int novo[tamanho]; //vetor sem repetição
int tamanho_novo; //tamanho do vetor sem repetição

for(int i = 0; i < tamanho; i++){
        int repetido = 0;
        for( int j = 0; j < tamanho_novo; j++){
            if(antigo[i] == novo[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            novo[tamanho_novo] = antigo[i];
            tamanho_novo++;
        }
    }
    // imprimir vetor sem repetições
    for( int i = 0; i < tamanho_novo; i++){
        printf("%d, ", novo[i]);
    }
    return 0;
}