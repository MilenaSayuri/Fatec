public class Carro {

    //atributos
    String nome;
    String marca;
    int ano;
    int vel;

    //metodos
    /*
    1. definir o retorno do metodo, nesse caso eh tipo void(retorno vazio)
    2. dentro das {} vamos definir oq o metodo ira fazer
    3. dentro dos () podemos receber parametros, variaveis que participarao do metodo
    */
    void acelerar(int aceleracao){
        vel += aceleracao;
    }

    void freiar(int reduzir){
        vel -= reduzir;
    }

    void buzinar(){
        System.out.println("bibibi");
    }
}