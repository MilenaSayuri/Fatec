public class TesteLivroDeNotas {
    public static void main(String[] args) {
        // Nome completamente qualificado da classe
        String nomeDisciplina = javax.swing.JOptionPane.showInputDialog("Digite o nome da disciplina");
        
        // Variável de referência para um objeto da classe LivroDeNotas
        // Utilizando o construtor para criar um objeto
        LivroDeNotas livroDeNotas = new LivroDeNotas(nomeDisciplina);
        
        // Chamando o método exibirMensagem do objeto livroDeNotas
        livroDeNotas.exibirMensagem();
        
        // Obtendo o nome da disciplina usando o método getNomeDisciplina
        System.out.println("A disciplina é " + livroDeNotas.getNomeDisciplina());
        System.out.println("Até logo");
        
        // Usando o método setNomeDisciplina para alterar o nome da disciplina
        livroDeNotas.setNomeDisciplina("Portuguese");
    }
}