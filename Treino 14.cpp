#include <stdio.h>
int main()
{
    float reais, dolares, resultado;
    printf("Quantos reais eu tenho?\n");
    scanf("%f", &reais);
    dolares= 5.40;
    resultado= (reais/dolares);
    printf("Tenho %.f dolares", resultado);
    return 0;
}