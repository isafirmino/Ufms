import java.util.ArrayList;
class StartupGame{

    private ArrayList<Integer> localizacaoCelulas;

    String verificaPalpite(int palpite){
        String resultado = "erro";    
    
        int index = localizacaoCelulas.indexOf(palpite);
        if (index >= 0){
            localizacaoCelulas.remove(index);
            if (localizacaoCelulas.isEmpty()){
                resultado = "abate";
            }
            else {
                resultado = "acerto";
            }
        }
        
        System.out.println(resultado);
        return resultado;

        }
        
        void setLocalizacaoCelulas(ArrayList<Integer> loc){
            localizacaoCelulas = loc;
    }
}

  