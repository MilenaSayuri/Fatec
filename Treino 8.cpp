#include <stdio.h>
int main()
{   int x,i; 
    printf("Digite o valor de X: ");
    scanf("%d",&x);
    for (i=1; i<=10; i=i+1)
    {   printf("%d x %d = %d\n", x, i, x*i);
    }
    return 0;
}