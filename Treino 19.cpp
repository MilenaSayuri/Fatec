// Faça um programa em C que faça o calculo do salario liquido atraves de um salario bruto informado
// seguindo as devidas regras: de R$1 A R$1020 isento de IR 0%; R$1020,01 a R$2500 7% de taxa de IR;
// R$2500,01 a 3800 15%; R$3800,01 e acima 25.5%
// salario liquido= salario bruto - IR
// mostre ao final os valores do salario bruto, ir e salario liquido
#include <stdio.h>
int main()
{
    float salario_bt, IR;
    printf("Entre com um valor de salario:\n");
    scanf("%f", &salario_bt);
    if (salario_bt >= 1 && salario_bt <= 1020)
        IR = 0;
    if (salario_bt > 1020 && salario_bt <= 2500)
        IR = 0.07 * salario_bt;
    if (salario_bt > 2500 && salario_bt <= 3800)
        IR = 0.15 * salario_bt;
    if (salario_bt > 3800)
        IR = 0.255 * salario_bt;
    printf("\n O valor final do salario bruto eh: %.2f", salario_bt);
    printf("\n O valor do IR eh: %.2f", IR);
    printf("\n O valor do salario liquido eh: %.2f", salario_bt - IR);
    return 0;
}