public class MembroProfessor extends Membro {
    public MembroProfessor(int id, String nome, String email){
        super(id, nome, email);
    }

    @Override
    public int getDiasEmprestimo(){
        return 30;
    }

    @Override
    public int getLimiteEmprestimo(){
        return 10;
    }

    @Override
    public String getTipo(){
        return "Professor";
    }

}
