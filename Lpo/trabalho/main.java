package trabalho;

abstract class itemBiblioteca {
    private int id;
    private String titulo;
    private int anoPublicacao;
    private boolean statusEmprestimo;

    public itemBiblioteca(int id, String titulo, int anoPublicacao){
        this.id = id;
        this.titulo = titulo;
        this.anoPublicacao = anoPublicacao;
        this.statusEmprestimo = false;
    }
    
    public int getID() {return this.id;}
    public String getTitulo() {return this.titulo;}
    public int getAnoPubli() {return this.anoPublicacao;}
    public void setStatus(boolean status) {this.statusEmprestimo = status;}

    //public abstract int calcularMulta(){

}

public class Livro extends itemBiblioteca{
    private String autor;
}