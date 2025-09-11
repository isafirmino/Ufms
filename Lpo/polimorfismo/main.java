import java.util.ArrayList;

abstract class Animal{
    private String nome;
    private int fome;

    public String getNome(){
        return nome;
    }

    public int getFome(){
        return fome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setFome(int fome){
        this.fome = fome;
    }

    abstract public void vagar();

    public void comer(){
        System.out.println(getNome() + " está comendo");
    }
}

abstract class Canino extends Animal{
    
    @Override
    public void vagar(){
        System.out.println(getNome() + " está vagando em bando");
    }

    public void uivar(){
        System.out.println(getNome() + " está uivando");
    }
}

class Cachorro extends Canino implements Pet{

    @Override
    public void sejaAmigavel(){
        System.out.println(getNome() + " esta sendo amigavel");
    }

    @Override
    public void brincar(){
        System.out.println(getNome() + " esta brincando");
    }

    public void abanarRabo(){
        System.out.println(getNome() + " está abanando o rabo");
    }

    @Override
    public boolean equals(Object obj){
        if(this == obj){
            return true;
        }
        if (this.getClass() != obj.getClass()){
            return false;
        }
        Cachorro c = (Cachorro) obj;
        if(this.getNome() == c.getNome() && this.getFome() == c.getFome()){
            return true;
        }else{
            return false;
        }
    }
 
    //@Override
    //public String toString() {
        //return "Cachorro: " + "\nFome: " + getFome() + "\nNome: " + getNome();
        //}
}


class Lobo extends Canino{}

class Gato extends Animal implements Pet{

    @Override
    public void brincar(){
        System.out.println(getNome() + " esta brincando");
    }

    @Override
    public void sejaAmigavel(){
        System.out.println(getNome() + " esta sendo amigavel");
    }

    @Override
    public void vagar(){
        System.out.println(getNome() + " está vagando em bando");
    }
}

interface Pet{
    abstract public void sejaAmigavel();
    abstract public void brincar();
}


public class main{
    public static void main(String[] args) {
        Cachorro thor = new Cachorro();
        thor.setNome("Thor");
        thor.setFome(3);
        thor.abanarRabo();
        thor.vagar();
        thor.comer();

        Cachorro c2 = new Cachorro();
        c2.setNome("Thor");
        c2.setFome(3);
        System.out.println(c2.equals(thor));

        Cachorro c3 = new Cachorro();
        c3.setNome("lia");
        c3.setFome(2);
        System.out.println(c3.equals(thor));

        ArrayList<Pet> animaisPet = new ArrayList<>();
        animaisPet.add(c2);
        animaisPet.add(c3);
        Gato g1 = new Gato();
        g1.setNome("Frida");
        animaisPet.add(g1);

        for(Pet p : animaisPet){
            p.brincar();
            p.sejaAmigavel();
        }
    }

}