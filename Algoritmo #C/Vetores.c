//Introducao com Vetores

//Definindo um valor prefixo
#include <stdio.h>
#define TAM 3
int vetor[TAM]

//Passando valores para o vetor

int nota[10];
nota[0] = 8;
nota[1] = 1; 
nota[2] = 5;
nota[3] = 2;
nota[4] = 7;
printf("%d", nota[0]); // ele ira me retornar o valor no indice 0 que eh 8


//Declarar Vetores
int vetor[5] = {5, 2, 5, 1, 6} //uma forma

int vetor[10], i; //outra forma
for(i = 0; i < 10; i++){
    printf("\nPosicao %d : %d", cont, vetor[i]);
}

//Adicionando 1 para cada posicao

for(i = 0; i < TAM; i++){
    vetor[i] = vetor[i] + 1; //adicionará +1 em cada bloco
}

//Lendo 3 valores para o vetor

for(i = 0; i < TAM; i++){
    scanf("%d", &vetor[i]); //dara 3 valores em cada posicao do vetor
}

#include <stdio.h>
#include <stdlib.h>

int main(){

int vet[5];

//Usuario digita os valores

for(int i = 0; i < 4; i++){
    scanf("%d", &vet[i]);
}

//Valores sequenciais
int vet[4] = {1,2,3,4};
for(int i = 0; i < 4; i++){
    vet[i] = i * 10;
}

//Valores aleatorios
int vet[4] = {1,2,3,4};
for(int i = 0; i < 4; i++){
    vet[i] = rand() % 2;
}

//Vetor de tras para frente
int vet[4] = {1,2,3,4};
for(int i = 4 - 1; i >= 0; i--){
    printf("%d", vet[i]);
}

//Soma dos valores de um vetor
int soma, vet[4] = {1,2,3,4};
    for(int i = 0; i < 4; i++){
        soma = soma + vet[i];
    }
        printf("%d", soma);

//Media dos valores de um vetor

float soma, vet[4] = {1,2,3,4};
    for(int i = 0; i < 4; i++){
        soma = soma + vet[i];
    }
        printf("%.1f", soma/4);

// srand -> para adicionar numeros aleatorios no rand, com a inclusao da biblioteca <time.h> e srand(time(NULL));

//Maior e menor valor dentro de um vetor

float maior, menor, vet[4] = {1,2,3,4};;
maior = menor = vet[0]; //sao valores que tem dentro do meu vetor
for( int i = 0; i < 4; i++){
    if(maior < vet[i])
    maior = vet[i];
   if(menor > vet[i])
    menor = vet[i];
}
printf("O maior %f e o menor %d", maior, menor);   


