public class CarroTestar {
    public static void main(String [] args){
        /*
        1. chamar a classe Carro e dar um nome para o meu objeto nesse caso c1, Carro() se diz respeito ao construtor 
        */
        Carro c1 = new Carro();

        c1.nome = "Uno";
        c1.marca = "Fiat";
        c1.ano = 2015;
        c1.vel = 60;

        //chamando os metodos
        c1.acelerar(10);

        System.out.println("Velocidade: " + c1.vel + "km/h"); //concatenação: deixar mais bonito adicionando texto para maior entendimento + a variavel(c1.vel)

        c1.freiar(20);
        System.out.println("Velocidade: " + c1.vel + "km/h");
    }
}
