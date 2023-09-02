#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}


int main(){
    int n;
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &n);
    printf("%d",fatorial(n));
    return 0;
}