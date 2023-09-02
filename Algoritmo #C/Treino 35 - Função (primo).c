/*
Escreva uma função em C que receba um número inteiro como parâmetro e retorne 1 se o número for primo ou 0 caso contrário.
Um número primo é aquele que é divisível apenas por 1 e por ele mesmo.*/

#include <stdio.h>

int NumeroPrimo(int n){
    if(n <= 1){ //se n for <= a 1 automaticamente ele retorna 0 pq seriam os negativos
        return 0;
    }
    for(int i = 2; i <= n / 2; i++){ //i começa com 2, i <= que n divido por 2(2 <= 5/2 igual a 2 <= 4 e sobrou 1 neste caso ele entrou no if então ele
                                    // retorna 0)
        if(n % i == 0){
            return 0;
        }
        
    }
    return 1; //retorna 1 por ser primo
}   


int main()
{   int NumeroPrimo(int n), resultado, n;
    
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &n);
    
    resultado = NumeroPrimo(n); //tem que colocar o parametro dentro nesse caso era o n pq eu queria verificar se ele era ou nao primo chamando a funcao 
    
    if(resultado == 1){
        printf("1 - O numero eh primo!");
    }
    else{
        printf("0 - O numero nao eh primo...");
    }

    return 0;
}
