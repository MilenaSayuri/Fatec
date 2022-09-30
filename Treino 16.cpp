#include <stdio.h>
int main()
{
    int valor, imposto;
    printf("Qual o valor do produto?\n");
    scanf("%d", &valor);
    imposto= (valor*40)/100;
    printf("O imposto sera de:\n%d", imposto);
    return 0;
}