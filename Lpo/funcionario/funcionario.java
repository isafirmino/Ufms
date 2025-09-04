class funcionario{
     private String nome;
     private double salario;

     public void addAumento(double valor){
          salario += valor;
     }

     public double ganhoAnual(){
          return salario * 12;
     }

     void exibeDados(){
          System.out.println("Nome: "+ nome + "\nSalario: R$" + salario + "\nGanho anual: " + ganhoAnual());
     }

     public void setNome(String n){
          nome = n;
     }

     public String getNome(){
        return nome;
    }

    public void setSalario(double i){
          salario = i;
    }

    public double getSalario(){
          return salario;
    }

}

class assistente extends funcionario{
     private int numMatricula;

     void exibeDados(){
          super.exibeDados(); 
          System.out.println("Numero de Matricula: "+ numMatricula);

     }

     public void setMatricula(int k){
          numMatricula = k;
     }

     public int getMatricula(){
          return numMatricula;
     }
}

class tecnico extends assistente{
     private double bonus;

     public double ganhoAnual(){
          return super.ganhoAnual() + bonus*12;
     }

     public void setBonus(double x){
          bonus = x;
     }
     
     public double getBonus(){
          return bonus;
     }

     public void exibeDados(){
          super.exibeDados();
          System.out.println("Bonus Salarial: " + bonus);
     }
}

class administrativo extends assistente{
     private String turno;
     private double addNoturno;

     public String getTurno(){
          return turno;
     }

     public void setTurno(String t){
          turno = t;
     }

     public double getAddNoturno(){
          return addNoturno;
     }

     public void setAddNoturno(double add){
          addNoturno = add;
     }

     public double ganhoAnual(){
          return super.ganhoAnual() + addNoturno;
     }

     public void exibeDados(){
          super.exibeDados();
          System.out.println("Turno: " + turno + "\nAdicional Noturno: " + addNoturno);
     }

}
