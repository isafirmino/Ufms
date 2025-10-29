import java.time.LocalDate;

public class Emprestimo {
    private int id;
    private Membro membro;
    private ItemBiblioteca item;
    private LocalDate dataEmprestimo;
    private LocalDate dataDevolucaoPrevista;
    private LocalDate dataDevolucaoReal;
    private boolean finalizado;

    public Emprestimo(int id, Membro membro, ItemBiblioteca item) {
        this.id = id;
        this.membro = membro;
        this.item = item;
        this.dataEmprestimo = LocalDate.now();
        this.dataDevolucaoPrevista = dataEmprestimo.plusDays(membro.getDiasEmprestimo());
        this.finalizado = false;
        item.setStatus(true); // Marca como emprestado
    }
}
