// O que eh e ccomo criar um ponteiro?
//sao variaveis que guardam enderecos de memoria
//ponteiros armazenam enderecos nao valores, ex A armazena o endereco de B que eh 1004, logo A aponta para B

//DECLARAO DE PONTEIRO

tipo *nome
//pq tipo? Cada tipo tem tamanhos diferentes

//OPERADORES
& -> endereco
* -> valor
a -> eh o endereco
*a -> vai pegar o valor que ta no endereco

int count; //na memoria aleatoriamente o endereco dele eh 1000
int q;
int *m;
m = &count; //m recebe o endereco de count, que eh 1000 apontando para count
count = 60; //dentro do endereco 1000 o valor de count vale 60
q = *m;//m aponta para count que guarda 1000 e o valor que ele aponta eh 60, ent q acaba recebendo o valor 60
int *n;
n = m; //n aponta para o m, os dois sao ponteiros em que m guarda o endereco de memoria que eh 1000, logo o n tb vai guardar o mesmo endereco e os dois vao apontar para o count





#include <stdio.h>
#include <stdlib.h>

void descobrirValores(int *v, int *me, int *ma, int tam){
    int i;
    *me = v[0];
    *ma = v[0];

    for( i = 1; i < tam; i++){
        if(v[i] < *me)
            *me = v[i];
        if(v[i] > *ma)
            *ma = v[i];
    }
    printf("Na funcao: Menor: %d\tMaior: %d\n", *me, *ma); //aqui eu quero o conteudo apontado pelos ponteiro me e ma
    printf("Na funcao -> End de me: %p\tEnd de ma: %p\n\n", &me, &ma);//endereco de me e ma
    printf("Na funcao -> Conteudo de me: %p\tConteudo de ma: %p\n\n", me, ma);// conteudo salvo em me e ma
}


int main()
{
    int num = 10, menor, maior, vet[] = {50, 10, 250, 500, 25}; // criacao de uma variavel e estamos pedindo pro computador criar um espaco na memoria para essa variavel; toda varivel possui um endereco unico na memoria
    printf("Valor de num: %d\n", num);
    printf("Endereco de num: %p\n", &num); // imprimir o endereco de memoria da variavel num

    // um ponteiro eh uma variavel que armazena um endereco de memoria

    int *p; // esse * diz para o usuario e para o computador que p nao eh uma simples variavel do tipo inteiro, diz que p eh um ponteiro para  uma regiao de memoria que guarda um valor inteiro
    // ponteiros so armazena endereco de memoria
    p = &num; //atribuicao valida, eu tenho p que eh uma variavel do tipo ponteiro e um conteudo que estou salvando/colocando eh o endereco 

    printf("Conteudo de p: %p\n", p);
    printf("Endereco de p: %p\n", &p); //p eh uma variavel entao ela tem um valor no endereco de memoria unico tambem
    printf("Conteudo apontado por p: %d\n",*p); //p aponta para valor entao o valor que tem q surgir eh 10

    descobrirValores(vet, &menor, &maior, 5);
    printf("Em main: Menor: %d\tMaior: %d\n", menor, maior);
    printf("End de menor: %p\tEnd de maior: %p\n\n", &menor, &maior);
    return 0;
}
