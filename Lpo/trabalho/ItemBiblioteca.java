public abstract class ItemBiblioteca {
    private int id;
    private String titulo;
    private int anoPublicacao;
    private boolean statusEmprestimo;

    //construtor da classe pai
    public ItemBiblioteca(int id, String titulo, int anoPublicacao){
        this.id = id;
        this.titulo = titulo;
        this.anoPublicacao = anoPublicacao;
        this.statusEmprestimo = false;
    }
    
    public int getID() {return this.id;}
    public String getTitulo() {return this.titulo;}
    public int getAnoPubli() {return this.anoPublicacao;}
    public void setStatus(boolean status) {this.statusEmprestimo = status;}

    public abstract double calcularMulta(int diasAtraso);

}
