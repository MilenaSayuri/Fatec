// Criar um código em C para lidar com 10 números inteiros (posso populá-los no código); o algoritmo deverá procurar um
// outro elemento lido (décimo primeiro valor) dentre os 10 anteriores lidos e dizer se foi encontrado (caso seja,
// informe em que índice) ou se não foi.
#include <stdio.h>
int main()
{
    int vet[] = {3, 7, 4, 1, 9, 2, 5, 8, 10, 6};
    int procura;
    printf("Entre com o numero procurado \n");
    scanf("%d", &procura);
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == procura)
        {
            printf("O numero procurado foi achado: [%d] no indice [%d]", i, procura);
            return 0;
        } 
    }
    printf("O numero procurado nao existe");

    return 0;
}
