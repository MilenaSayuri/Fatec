#include <stdio.h>
//1) Construir as funções utilizadas na função principal a seguir:

void troca(int *, int *);
int maior(int , int);

int main (){
    int a = 10, b = 5, ma;
    troca(&a, &b);
    printf("\nDepois da troca: %d %d", a, b);
    ma = maior(a, b);
    printf("\nO maior deles: %d", ma);
    return 0;
}

void troca(int *a, int *b){
    int aux = *a; //aux = 10
    *a = *b; //*a = 5
    *b = aux; //*b = 10
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}