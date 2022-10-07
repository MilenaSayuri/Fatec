//Faça um programa em C que calcule o valor da comissão de um vendedor baseado no valor total de vendas informado, 
//use as seguintes faixas: R$1,00 ate R$100 com 1% de comissão; R$101 ate R$300 com 2%; R$301 ate R$500 com 3%; 
//acima de R$501 com 4%
#include <stdio.h>
int main ()
{
    float valor, comissao;
    printf("Entre com um valor:\n");
    scanf("%f", &valor);
    if(valor >= 1 && valor <= 100)
    comissao= valor*0.01;
        if(valor >= 101 && valor <= 300)
        comissao= valor*0.02;
            if(valor >= 301 && valor <= 500)
            comissao= valor*0.03;
                if(valor > 501 )
                comissao= valor*0.04;
    printf("\nO valor de comissao baseado no valor total eh de: %.2f",comissao);
    return 0;
}