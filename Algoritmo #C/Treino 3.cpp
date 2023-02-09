#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Calule o IMC, de um valor de peso:\n");
    scanf("%f", &peso);
    printf("De um valor de altura: ");
    scanf("%f", &altura);

    imc= peso/(altura*altura);

    if(imc<18.5){
        printf("Magreza");
    }
    else if(imc > 18.5 && imc < 25){
        printf("Normal");
    }
    else if(imc > 25 && imc < 30){
        printf("Sobrepeso");
    }
    else if(imc > 30 && imc < 40){
        printf("Obesidade");
    }
    else{ 
        printf("Obesidade grave");

        
    }

}