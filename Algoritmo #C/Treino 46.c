
/*Encontre o índice do número mais próximo de um valor procurado em um vetor:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5] = {10, 25, 31, 5, 13};
    int procurado = 30;
    int IndiceMaisProximo = 0;
    int diferenca = abs(procurado - vet[0]); //a diferenca recebe o valor absoluto de procurado - vet[0] --> diferenca inicial 30 - 10 = 20 

    for(int i = 0; i < 5; i++){
        int NovaDiff = abs(procurado - vet[i]); //novadiff recebe o valor absoluto de procurado - vet[i] --> 30 - 32 = 2 (numero mais proximo de diff)
        if(NovaDiff < diferenca){ // 30 - 10 = 20, 30 - 25 = 5, 30 - 32 = 2, 30 - 5 = 25, 30 - 13 = 17
            IndiceMaisProximo = i; //Indice mais proximo recebe o valor do indice que se aproxima do numero procurado
            diferenca = NovaDiff; //diferenca eh atualizada pela novadiff
        } 
        
    }
     printf("Valor mais próximo: %d\n", vet[IndiceMaisProximo]);
    printf("Índice do valor mais próximo: %d\n", IndiceMaisProximo);

    return 0;
}