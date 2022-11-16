#include <stdio.h>
int main()
{
    float n, c=1, totaln=0;
    do{
       printf("Digite um numero:\n");
       scanf("%f", &n);
       if (n < 0){
        totaln= totaln + 1;
       }
       c = c + 1;
    } while(c <= 5);
    printf ("Foram digitados %.0f valores negativos", totaln);
    return 0;
}