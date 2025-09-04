public class funcionario{
     String nome;
     double salario;

     public double addAumento(double valor){
          return salario + valor;
     }

     public double ganhoAnual(){
          return salario * 12;
     }

     void exibeDados(){
          System.out.println("Nome: "+ nome + "\nSalario: R$" + salario);
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
     int numMatricula;

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
     double bonus;

     public double ganhoAnual(){
          return super.ganhoAnual() + bonus;
     }

     public void setBonus(double x){
          bonus = x;
     }
     
     public double getBonus(){
          return bonus;
     }
}

class administrativo extends assistente{
     boolean ;
     double addNoturno;

     public double

}