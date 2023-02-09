//Faça um programa em C para ler uma temperatura em graus,Celsius e transformá-la em Farenheit. 
//Utilize a seguinte fórmula:F = ((9 * C) / 5) + 32
#include <stdio.h>
int main()
{
    int cel, far;
    printf("De uma temperatura em graus Celsius e transforma-la em Farenheit:\n");
    scanf("%d", &cel);
    far= (9*cel) / 5 + 32;
    printf("Em Farenheit é:%d\n", far);
    return 0;
}