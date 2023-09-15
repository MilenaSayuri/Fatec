#include <stdio.h>
#include <math.h>

float calcula_hipotenusa(float a, float b){
    float hipotenusa = sqrt(a * a + b * b);
    return hipotenusa;
}

int main(){
    float cateto_a, cateto_b;

    printf("Digite o valor do cateto a:\n");
    scanf("%f", &cateto_a);
    printf("Digite o valor do cateto b:\n");
    scanf("%f", &cateto_b);

    float hipotenusa = calcula_hipotenusa(cateto_a, cateto_b);
    printf("O valor da hipotenusa eh de: %.2f\n", hipotenusa);
    return 0;
}