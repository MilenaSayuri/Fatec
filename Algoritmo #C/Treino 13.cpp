#include <stdio.h>
int main ()
{
    int ano_atual, ano_nasc, resultado;
    printf("Em que ano nasci?\n");
    scanf("%d", &ano_nasc);
    printf("Em que ano estamos?\n");
    scanf("%d", &ano_atual);
    resultado= (ano_atual - ano_nasc);
    printf("Tenho:\n%d"),resultado;
    return 0;
}