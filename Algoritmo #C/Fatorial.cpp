#include <stdio.h>
int main() {  
    int n=0, i=0, fat=1;
    printf("Entre com um valor n: ");
    scanf("%d", &n);
 
    fat = n;
    for(i=1; i<n; i++){ 
        fat = fat*i; 
    }
    printf("\nO fatorial de %d eh %d", n, fat);
    return 0;
}
