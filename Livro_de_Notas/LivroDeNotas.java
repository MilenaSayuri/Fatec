public class LivroDeNotas {
    // Variável de instância -> é sinônimo de objeto, modificador de acesso, encapsulamento
    private String nomeDisciplina;

    // Getter
    public String getNomeDisciplina() {
        return nomeDisciplina;
    }

    // Setter
    public void setNomeDisciplina(String nomeDisciplina) {
        this.nomeDisciplina = nomeDisciplina;
    }

    public void exibirMensagem() {
        System.out.printf("Bem-vindo ao livro de notas %s\n", nomeDisciplina);
    }

    // Construtor padrão (aquele cuja lista de parâmetros é vazia)
    public LivroDeNotas(String nomeDisciplina) {
        // Shadowing
        this.nomeDisciplina = nomeDisciplina;
    }
}