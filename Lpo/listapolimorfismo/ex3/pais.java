package listapolimorfismo.ex3;
import java.util.ArrayList;

public class pais {
    private String codigoISO;
    private String nome;
    private int populacao;
    private int area;
    private ArrayList<String> vizinhos = new ArrayList<>();

    public void setCodigoISO(String cod){
        codigoISO = cod;
    }

    public String getCodigoISO(){
        return codigoISO;
    }

    public void setNome(String n){
        nome = n;
    }

    public String getNome(){
        return nome;
    }

    public void setPopulacao(int pop){
        populacao = pop;
    }

    public int getPopulacao(){
        return populacao;
    }

    public void setArea(int a){
        area = a;
    }

    public int getArea(){
        return area;
    }

    public void setVizinho(String v){
        vizinhos.add(v);
    }

    public ArrayList<String> getVizinhos(){
        return vizinhos;
    }

    public boolean contemVizinho(String nomePais){
        return vizinhos.contains(nomePais);
    }

    public double densidadePop(){
        return (double) populacao / area;
    }

    public ArrayList<String> vizinhosComum(pais outroPais){
        ArrayList<String> vizinhosComum = new ArrayList<>();
        ArrayList<String> vizinhosOutro = outroPais.getVizinhos();

        for (String meuVizinho : vizinhos){
            if (vizinhosOutro.contains(meuVizinho)){
                vizinhosComum.add(meuVizinho);
            }  
        }
        return vizinhosComum;
    }
}
