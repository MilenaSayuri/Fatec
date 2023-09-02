
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No; //estrutura: tipo No

No* inserir(No *inicio, int x){

    No *novo = malloc(sizeof(No)); //A função malloc aloca um espaço de memória e retorna um ponteiro do tipo void para o início do espaço de memória alocado
    if(novo){
        novo->valor = x; //novo eh um ponteiro do tipo No da minha struct entao sempre vai usar o ->, caso contrario sera usado um .
        novo->proximo = inicio; 
    }
    return novo;
}

//ponteiro para ponteiro
void inserir2(No **inicio, int x){

    No *novo = malloc(sizeof(No)); 
    if(novo){
        novo->valor = x;
        novo->proximo = *inicio; 
        *inicio = novo;
    }
}



void imprimir(No *inicio){
    if(inicio){// escrever isso eh a mesma coisa que if(inicio == null)
        printf("%d", inicio->valor); // imprime esse valor
        imprimir(inicio->proximo); //e chamo a funcao passando para o proximo
    } 
}

int main(){
    
    No *lista = NULL;
    lista = inserir(&lista, 10); //estou mandando o endereco da variavel lista
    lista = inserir(&lista, 50);
    lista = inserir(&lista, 100);

    
    inserir2(lista, 16);
    inserir2(lista, 55);
    inserir2(lista, 109);
    
    imprimir(lista);

    return 0;
}