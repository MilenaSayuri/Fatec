#include <stdio.h>

int main()
{
    float frente, esquerda, direita, tras;
    printf("Entre com a distancia a frente: ");
    scanf("%f", &frente);

    if (frente > 50)
    {
        printf("Frente");
    }
    else
    {
        printf("Entre com a distancia a direita: ");
        scanf("%f", &direita);

        if (direita > 50)
        {
            printf("Direita");
        }
        else
        {
            printf("Entre com a distancia a esquerda: ");
            scanf("%f", &esquerda);

            if (esquerda > 50)
            {
                printf("Esquerda");
            }
            else
            {
                printf("Marcha a ré");
            }
        }
    }

    return 0;
}