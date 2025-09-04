public class testaFuncionario {
    public static void main(String[] args) {
        funcionario f = new funcionario();

        f.setNome("Maria");
        f.setSalario(1500.00);
        f.addAumento(500.00);
        f.exibeDados();

        assistente a = new assistente();
        a.setNome("Livia");
        a.setSalario(1400.00);
        a.addAumento(500.00);
        a.setMatricula(123456);
        a.exibeDados();

        tecnico t = new tecnico();
        t.setNome("Jose");
        t.setSalario(2000.00);
        t.setMatricula(458458);
        t.setBonus(300.00);
        t.addAumento(100.00);
        t.exibeDados();

        administrativo adm = new administrativo();
        adm.setNome("Helena");
        adm.setSalario(2500.00);
        adm.setMatricula(987654);
        adm.setTurno("Noite");
        adm.setAddNoturno(400.00);
        adm.addAumento(250.00);
        adm.exibeDados();
    }
}
