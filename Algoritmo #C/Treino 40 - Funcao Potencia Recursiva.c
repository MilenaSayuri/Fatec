//Implemente uma funcao recursiva que dado dois numeros inteiros x e n, calcula e retorne o valor de x elevado n

#include <stdio.h>

int potencia(int x, int n){
    if(n == 0)
        return 1;
    else
        return x * potencia(x, n-1);
}


int main(){
    int n, x;
    printf("Entre com um valor para X e para N:\n");
    scanf("%d%d", &x,&n);
    printf("Resultado de %d elevado a %d: %d\n",x, n, potencia(x, n));
    return 0;
}