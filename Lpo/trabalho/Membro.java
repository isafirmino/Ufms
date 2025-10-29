public abstract class Membro {
    private int id;
    private String nome;
    private String email;

    public Membro(int id, String nome, String email){
        this.id = id;
        this.nome = nome;
        this.email = email;
    }

    public int getId(){
        return id;
    }

    public String nome(){
        return nome;
    }

    public String email(){
        return email;
    }

    public abstract int getDiasEmprestimo();
    public abstract int getLimiteEmprestimo();
    public abstract String getTipo();
}
