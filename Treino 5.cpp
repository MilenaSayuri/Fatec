#include <stdio.h>
int main()

{ float a, b, c, maior, menor, media;
    printf("Entre com 3 notas: ");
    scanf("%f%f%f", &a, &b, &c);
    maior= a;
    menor= a;
    if(b>maior){
        maior=b;
    }
    else if(b<menor){
        menor=b;
    }
    if(c>maior){
        maior=c;
    }
    else if(c<menor){
        menor=c;
    }
    media= (menor+maior)/2;
    printf("A media é: %f.", media);
    return 0;
}

