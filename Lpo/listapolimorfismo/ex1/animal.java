package listapolimorfismo.ex1;

class animal {
    private String nome;
    private int idade;

    public void setNome(String n){
        nome = n;
    }

    public String getNome(){
        return nome;
    }

    public void setIdade(int i){
        idade = i;
    }

    public int getIdade(){
        return idade;
    }

    public void emitirSom(){
        System.out.println("prupru");
    }
}

class cachorro extends animal{
    public void emitirSom(){
        System.out.println("auau");
    }
}

class gato extends animal{
    public void emitirSom(){
        System.out.println("miau");
    }
}

class passaro extends animal{
    public void emitirSom(){
        System.out.println("piupiu");
    }
}