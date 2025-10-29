public class MembroGraduacao extends Membro{
    public MembroGraduacao(int id, String nome, String email){
        super(id, nome, email);
    }

    @Override
    public int getDiasEmprestimo(){
        return 15;
    }

    @Override
    public int getLimiteEmprestimo(){
        return 3;
    }

    @Override
    public String getTipo(){
        return "Aluno de Graduação";
    }
}