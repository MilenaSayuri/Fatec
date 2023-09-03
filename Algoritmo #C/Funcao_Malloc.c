#include <stdio.h>
#include <stdlib.h>
/*      ----Alocação dinâmica de memória com aa função malloc.----
    -Retorna um ponteiro para a região de memória alocada ou NULL
    -Malloc ele aloca blocos de memoria de byte em byte
    -Operador Sizeof usado para saber o ta manho de variaveis ou de tipos, ele retorna o tamanho do tipo ou variavel em bytes
    -Para saber o tamanho de um flaot fazemos sizeof(float), se declarar a variavel f como float e quisermos saber o seu tamanho fazemos sizeof f
    1.malloc()
    2.malloc(sizeof()) 
    3.malloc(sizeof(int ou char ou float...))
*/

int main(){
    int *x;
    x = malloc(sizeof(int)); //int->4bytes de memoria, o endereco onde se inicia esses 4bytes sera retornado na variavel x
    if(x){ // (x != NULL)
        printf("\n----------Memoria alocada com sucesso!------------\n");
        printf("Antes da atribuicao o x vale: %d\n", *x);
        *x = 50;
        printf("Depois da atribuicao o endereco da memoria x vale: %d\n", *x);
    }
    else
        printf("\n----------Erro ao alocar memoria!---------------\n");
    free(x);
    return 0;
}