#include <stdio.h>

int main()
{
    float x;
    printf("Entre com um numero: ");
    scanf("%f", &x);

    x >=0 ? printf("Positivo") : printf("Negativo"); 
    return 0;
}