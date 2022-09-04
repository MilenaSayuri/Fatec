#include <stdio.h>

int main()
{
    // 1) obrigatorio definir variavel no comeco do codigo
    // <tipo> <nome_variavel>
    int numero; 

    // 2) definir uma mensagem para o usuario
    // escreva("mensagem");
    printf("Escreva um numero: ");

    // 3) leia o valor inserido pelo usuario
    // leia(valor, NaVariavel)
    scanf("%d", &numero);

    // %d - decimal
    // %f - numeros quebrados
    // %i - inteiro
    // & - armazena

    // logo '&numero' significa que ele esta salvando o numero digitado na variavel numero

    // na linha abaixo escreve ( mensagem desejada ) + variavel
    printf("\n Numero inserido pelo usuario %d", numero);
    return 0;
}