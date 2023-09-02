//De quanto memoria um ponteiro precisa?

#include <stdio.h>
/*
int main(){
    //um ponteiro eh como uma seta, essa variavel recebe um endereco de memoria, tendo um mesmo tamanho
    int *p; // um ponteiro ocupa 8byte na minha maquina
    char *p2;
    float *p3;


    printf("Tamanho: %d\n", sizeof(p)); // o SIZEOF gera o tamanho de armazenamento de uma expressão ou um tipo de dados, medido no número de unidades de tamanho de caractere.
    printf("Tamanho: %d\n", sizeof(p2));
    printf("Tamanho: %d\n", sizeof(p3));

    return 0;
}

//Pq nao usamos o & ao ler uma string com a funcao scanf?

int main(){

    char palavra[100];
    
    //scanf("%100[^\n]", palavra);
    //printf("%s\n", palavra);

    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);
    //usar ou nao o & nao fara diferenca pq ele ira apontar pro inicio do vetor
    
    return 0;
}


//como passar um ponteiro como parametro


void imprimir(int *num){
    printf("%d\n", *num);
    *num = 80;
}
int main(){
    int idade = 25;

    imprimir(&idade);
    printf("No main: %d\n", idade);

    return 0;
}*/

//um vetor eh sempre um ponteiro?

void teste(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        vet[i] = vet[i] * 2;
        printf("\n");
    }
}

void imprimir(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d", vet[i]);
        printf("\n");
    }
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    imprimir(vet, 10); // sem importar o tipo, toda vez q passa um vetor como parametro para uma funcao ou procedimento, oq esta sendo recebido eh uma apontador
    //apontador eh um endereco de memoria que aponta para aquela variavel/conjunto de elemento
    //qualquer alteracao que fizer no seu vetor isso se refletira no conjunto de elementos dentro do main pq oq vc esta recebendo eh um apontador/ponteiro
    teste(vet, 10);
    imprimir(vet, 10);
    return 0;
}