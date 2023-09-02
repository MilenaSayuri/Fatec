#include <stdio.h>
/*Tenho uma estrutura que é prevista para guardar nome, tempo de serviço (em anos) e salário
de trabalhadores de uma metalúrgica. Escreva como seria esta estrutura em C. Montarei um vetor destas
estruturas, que funcionará com um banco de dados.*/

struct Funcionario{
    char nome[100];
    int tempo_servico;
    double salario;
};

/*Implemente um procedimento em C que imprima na tela os dados de todos os funcionários
salário maior que R$ 3.000,00 e com menos de 2 anos na empresa.*/
void Dados(int N, struct Funcionario vet[]){
    int i;
    for(i = 0; i < N; i++){
        if(vet[i].salario >= 3.000 && vet[i].tempo_servico <= 2){
        printf("Funcionario(a) %s com R$%.3f reais e com %d anos na empresa\n",vet[i].nome, vet[i].salario, vet[i].tempo_servico);
        printf("\n");
        }
    }
}

/*Implemente um procedimento que altere o tempo de serviço de todos os funcionários da
empresa, somando um a este. O procedimento deve também dar um reajuste salarial de 8% a todos. */

int Reajuste(int N, struct Funcionario vet[]){
    printf("O novo reajuste dos funcionarios foram atualizados com sucesso!\n");
    for(int i = 0; i < N; i++){
        vet[i].tempo_servico++;
        vet[i].salario *= 1.08;
        printf("Funcionario(a) %s com R$%.3f reais e com %d anos na empresa\n",vet[i].nome, vet[i].salario, vet[i].tempo_servico);
    }
}

int main(){
    
    struct Funcionario func[3] = {{"João", 4, 4.000},{"Maria", 2, 3.000},{"Pedro", 1, 3.200}};
    printf("Antes do reajuste:\n");
    Dados(3, func);
    Reajuste(3, func);
    
    return 0;
}