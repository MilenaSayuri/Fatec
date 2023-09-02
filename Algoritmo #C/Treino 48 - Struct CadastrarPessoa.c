/*Crie uma estrutura (struct) chamada "Pessoa" com os seguintes campos: nome (string), idade (inteiro) e altura (float). 
Em seguida, implemente um procedimento chamado "cadastrarPessoa" que recebe como parâmetro um objeto do tipo "Pessoa" e 
solicita ao usuário que insira os dados da pessoa (nome, idade e altura). Por fim, no programa principal, crie um objeto 
"pessoa1" do tipo "Pessoa", chame o procedimento "cadastrarPessoa" passando o objeto "pessoa1" como argumento e exiba os dados 
cadastrados na tela.*/

#include <stdio.h>

struct Pessoa{
    char nome[100];
    int idade;
    float altura;
};

void cadastrarPessoa(struct Pessoa *pessoa){
    printf("Insira os dados da pessoa\n");
    printf("Nome:\n");
    scanf("%s", pessoa->nome); //pessoa->nome permite acessar o campo nome do objeto apontado por pessoa sem precisar usar o operador de desreferência (*).
    printf("Idade:\n");
    scanf("%d", &(pessoa->idade)); //Usando &(pessoa->idade), estamos obtendo o endereço de memória de idade por meio do operador & e passando esse endereço como argumento para a função scanf. Dessa forma, a função scanf poderá armazenar o valor lido diretamente na variável idade dentro da estrutura Pessoa.
    printf("Altura:\n");
    scanf("%f", &(pessoa->altura));
}

int main(){
    struct Pessoa pessoa1;
    cadastrarPessoa(&pessoa1);
    struct Pessoa pessoa2;
    cadastrarPessoa(&pessoa2);
    
    printf("***Pessoas cadastras***\n\n");
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n\n", pessoa1.nome, pessoa1.idade, pessoa1.altura);
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n\n", pessoa2.nome, pessoa2.idade, pessoa2.altura);
    
}