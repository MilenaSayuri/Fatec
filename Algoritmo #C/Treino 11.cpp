#include <stdio.h>
int main()
{
    int n, i, x=0;
    printf("Entre com um numero:");
    scanf("%d", &n);

   for (i = 2; i <= n/2; i++){
        if (n % i == 0)
        x++;
   }
       if( x==0)
            printf("É PRIMO ", n);
        else
            printf(" NAO É PRIMO ", n);
    return 0;
}