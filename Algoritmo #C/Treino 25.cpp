// Criar um código em C para ler 10 números inteiros e mostrar quantos números pares existem ali
#include <stdio.h>
int main()
{
    int vet[10];
    int cont = 0;
    printf("Entre com 10 numeros: \n");

    for (int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0)
            cont++;
    }
    printf("Existem %d pares", cont);
    return 0;
}