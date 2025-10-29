public class Revista extends ItemBiblioteca{
    private int numeroEdicao;
    private String mesPublicacao;

    //Construtor
    public Revista(int id, String titulo, int anoPublicacao, int numeroEdicao, String mesPublicacao){

    //chama pai
    super(id, titulo, anoPublicacao);
    //filha
    this.numeroEdicao = numeroEdicao;
    this.mesPublicacao = mesPublicacao; }

    public int getNumeroEdicao(){
        return numeroEdicao;
    }

    public String getMesPublicacao(){
        return mesPublicacao;
    }

    @Override
    public double calcularMulta(int diasAtraso){
        return diasAtraso * 0.5;
    }

}