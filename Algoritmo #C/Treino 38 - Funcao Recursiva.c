
#include <stdio.h>

int imprimir(int x){
    if(x == 0){
        printf("%d", x);
    }else{
        imprimir(x - 1);
        printf("%d", x); //desse modo ele mostrara na tela de modo crescente, caso queira decrescente eh so mudar de linha para cima 
    }
}

int main()
{
    int n;
    
    printf("Entre com um numero diferente de zero: ");
    scanf("%d", &n);
    
    imprimir(n);

    return 0;
}
