package listapolimorfismo.ex3;

public class testePais {
    public static void main(String[] args) {
        pais brasil = new pais();
        brasil.setNome("Brasil");
        brasil.setCodigoISO("BRA");
        brasil.setArea(200000);
        brasil.setPopulacao(50000);
        brasil.setVizinho("Argentina");
        brasil.setVizinho("Uruguai");
        brasil.setVizinho("Paraguai");
        double dBrasil = brasil.densidadePop();
        boolean contemUru = brasil.contemVizinho("Uruguai");
        boolean contemChi = brasil.contemVizinho("Chile");

        System.out.println(brasil.getNome() + "\n" + brasil.getCodigoISO() + "\n" + brasil.getPopulacao() + "\n" + brasil.getArea() + "\n" + dBrasil + "\n" + contemChi + "\n" + contemUru);

    }
}
