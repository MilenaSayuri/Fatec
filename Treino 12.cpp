#include <stdio.h>
int main ()
{
    int l1, l2, l3;
    printf("Escreva um numero para o primeiro lado:\n");
    scanf("%d", &l1);
    printf("Escreva um numero para o segundo lado:\n");
    scanf("%d", &l2);
    printf("Escreva um numero para o terceiro lado:\n");
    scanf("%d", &l3);
    if (l1==l2 && l2==l3){
        printf("É UM TRIANGULO EQUILATERO");
    } if (l1!=l2 && l2!=l3 && l1!=l3){
           printf("É UM TRIANGULO ESCALENO");
    }
    return 0;
}