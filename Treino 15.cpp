#include <stdio.h>
int main ()
{
    float fah, resultado;
    printf("Quantos graus é de Fahrenheit para Celsius?:\n");
    scanf("%f", &fah);
    resultado= (fah-32)/1.8;
    printf("Entao é %.f Celsius", resultado);
    return 0;
}