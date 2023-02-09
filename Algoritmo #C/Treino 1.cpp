#include <stdio.h>

int main()
{
int n;

printf("Entre com um numero inteiro: ");
scanf("%d", &n);

if(n>0)
{
     printf("Positivo");
} 
else if(n<0)
{ 
    printf("Negativo");
}
else
{ 
    printf("Nulo");
}
return 0;
}

