#include <stdio.h>
#include <math.h>
int main()
{ 
    int a, b, c;
    printf("Diga 3 numeros e diga se eles podem ser ou não um triângulo: ");
    scanf("%i%i%i", &a, &b, &c);
    
    if(a<b+c  &&  b<a+c  &&  c<a+b){
        printf("\nÉ triângulo");
    }
     if(a*a==b*b + c*c || b*b==a*a + c*c || c*c==a*a + b*b){
        printf("\nÉ retângulo");
    }
     if(a==b  &&  b==c){
        printf("\nÉ equilátero");
    }
     if(a==b && a!=c || a==c && a!=b || b==c && b!=a){
        printf("\nÉ isósceles");
    }
    if(a!=b  &&  b!=c  &&  a!=c){
        printf("\nÉ escaleno");    
    }
    return 0;
}