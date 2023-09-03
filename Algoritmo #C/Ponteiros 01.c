#include <stdio.h>
/*
int main(){
    int *x, valor, y;
    valor = 35;
    x = &valor; //x recebe o endereco de valor
    y = *x; //y recebe o conteudo que x aponta que o do valor(35)

    printf("Endereco da variavel comum valor: %p\n", &valor);
    printf("Lendo o conteudo do ponteiro x: %p\n", x);
    printf("Endereco da variavel ponteiro x: %p\n", &x);
    printf("Conteudo da variavel apontada por x: %d\n", *x);
    printf("Conteudo da variavel comum y: %d\n", y);
    return 0;
}
*/

//ponteiros para ponteiros

int main(){
    int a = 40;
    int *pont1;
    int **pont2;

    pont1 = &a;
    pont2 = &pont1;

    printf("O endereco da variavel a eh: %p\n", &a);
    printf("O endereco do ponteiro pont1 eh: %p\n", &pont1);
    printf("O endereco da variavel pont2 eh: %p\n", &pont2);
    printf("O endereco apontado por pont1 eh: %p\n", pont1);
    printf("O endereco apontado por pont2 eh: %p\n", pont2);
    printf("E o valor armazenado em a eh: %d\n", **pont2);
    return 0;
}
