#include <stdio.h>
int main()
{
    int n, i;
    printf("Entre com um numero inteiro:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("\n%d é divisivel por: %d", n, i);
    }
    return 0;
}