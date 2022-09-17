#include <stdio.h>

int main() //main é uma função ()
{          //quando é uma função precisa de chaves "{}"
    int x; //";" é usada nos finais para mostrar o fim do código / instrução

    printf("Dê um numero para saber se é par ou ímpar: ");
    scanf("%d", &x); //% usada para falar o tipo da váriavel, & usada para armazenar na váriavel

    if(x%2 == 0){ //% falado como "mod" ele é o resto da divisão
        printf("PAR");
    } else {
        printf("Ímpar");
    }
    return 0;
}



