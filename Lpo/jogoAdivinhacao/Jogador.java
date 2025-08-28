class Jogador{
    String nome;
    boolean acertou=false;
    int qtdAcertos = 0;

    public int adivinha(){
        return (int)(Math.random() * 10);
    }

    public void setNome(String n){
        nome = n;
    }

    public String getNome(){
        return nome;
    }

    public void setAcertou(boolean b){
        acertou = b;
    }

    public boolean getAcertou(){
        return acertou;
    }

    public void addAcerto(){
        qtdAcertos = qtdAcertos + 1;
    }

    public int getAcertos(){
        return qtdAcertos;
    }
}
