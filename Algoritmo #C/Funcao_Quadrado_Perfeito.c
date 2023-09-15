#include <stdio.h>

int numero_perfeito(int num);
int soma_divisor(int num);

int main(){
    int num;
    printf("Digite um numero positivo:\n");
    scanf("%d", &num);
    if(num < 1){
        printf("Por favor insira um numero positivos\n");
    } else if(numero_perfeito(num) == 1){
        printf("Numero Perfeito!!\n");
    } else{
        printf("Valor digitado nao eh um numero perfeito...\n");
    }
    return 0;
}
//função para calcular a soma dos divisores de um numero
int soma_divisor(int num){
    int divisor, soma = 0;
    for(divisor = 1; divisor <= num/2 || divisor == num ; divisor++){
        if(num % divisor == 0){
            soma += divisor;
        }
    }
    return soma;
}
//Função para verificar se o numero é perfeito
int numero_perfeito(int num){
    if(soma_divisor(num) == num)
        return 1;
    else
        return 0;
}
