
/* implemente um procedimento que imprima na tela os dados de todos os pacientes com IMC maior que 
30 e, ao mesmo tempo, menores de idade(problema de obesidade infantil)
A assinatura ou prototipo do procedimento é: vooid obesosMenores(struct paciente vet[], int N), onde
N é a quantidade de pacientes na clinica.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ficha{
    char nome[100];
    int idade;
    float peso, altura;
}; typedef struct Ficha ficha;

void obesosMenores(struct Ficha vet[], int N){
    int i;
    for(i = 0; i < N; i++){
        float IMC = vet[i].peso / (vet[i].altura*vet[i].altura);
        if(IMC > 30 && vet[i].idade < 18){
            printf("O paciente %s com %d anos e com %.2f de altura, eh considerado obeso", vet[i].nome, vet[i].idade, vet[i].altura);
        }
    }
}

int main(){
    
    
    // Exemplo de uso
    struct Ficha pacientes[3] = {
        {"João", 15, 70.0, 1.70},
        {"Maria", 20, 60.0, 1.60},
        {"Pedro", 12, 80.0, 1.50}
    };

    obesosMenores(pacientes, 3);

    return 0;

}