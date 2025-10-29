public class Livro extends ItemBiblioteca{
    private String autor;
    private int numeroPaginas;

    public Livro(int id, String titulo, int anoPublicacao, String autor, int numeroPaginas){

    //super() chama o construtor da classe filha itemBiblioteca
    super(id, titulo, anoPublicacao);
    //inicializa os atributos especificos do Livro
    this.autor = autor;
    this.numeroPaginas = numeroPaginas; }

    public String getAutor(){
        return autor;
    }

    public int getNumeroPaginas(){
        return numeroPaginas;
    }

    @Override
    public double calcularMulta(int diasAtraso){
        //multa de 2 reais por dia de atraso
        return diasAtraso * 2.0;
    }
}
