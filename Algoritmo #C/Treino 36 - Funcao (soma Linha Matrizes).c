//Função que retorna a soma de uma linha de uma matriz

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int tam = 5;

void imprimir(int m[][5]){
    int i,j;
    for(i = 0; i < tam; i++){ 
        for(j = 0; j < tam; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

//funcao que calcula e retorna a soma de uma linha da matriz

int somarLinha(int x[][5], int l){
    int c, soma = 0;
    
    for(c = 0; c < tam; c++)
        soma += x[l][c]; //a linha eh fixa por ex: l = 3 a coluna ira de 0 a 4 no qual foi informado l 3 c 0, l 3 c 1, l 3 c 2 e assim por adiante
        return soma;
}

int main(){
    int mat[5][5]; //nossa matriz 5 por 5
    int i,j; // 2 variaveis para a repeticao

    srand(time(NULL)); //vai fazer que toda vez que execute o programa gere uma sequencia de numeros diferentes

    for(i = 0; i < tam; i++){ //repeticao para preencher a nossa matriz
        for(j = 0; j < tam; j++){

            mat[i][j] = rand() % 10; //utilizado entao o rand para pegar numeros aleatorios mas para nao serem valores altos 
                                       //sera feito o resto da divisao por 100
        }
    }  

    imprimir(mat);
    //chamar a funcao com os parametros matriz e a linha que eu quero somar no caso eh o mat e a linha 0 que eu quero
    printf("Soma da linha 0: %d\n",somarLinha(mat, 0)); 
    printf("Soma da linha 1: %d\n",somarLinha(mat, 1));
    printf("Soma da linha 2: %d",somarLinha(mat, 2));
    
    return 0;
}
        