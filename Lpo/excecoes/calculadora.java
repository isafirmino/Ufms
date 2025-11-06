class DivisaoPorZeroException extends Exception{
    //construtor
    public DivisaoPorZeroException(String mensagem){
        super(mensagem);
    }
}

public class calculadora{
    public static double dividir(int a, int b) throws DivisaoPorZeroException{
        if(b == 0){
            throw new DivisaoPorZeroException("Erro: divisao por zero");
        };
        return a/b;
    }
    public static void main(String[] args){
        try{
            double resultado = dividir(3, 0);
            System.out.println("Resultado: " + resultado);
        }
        catch (DivisaoPorZeroException e){ 
            System.out.println("Excecao capturada: "+ e.getMessage());
            e.printStackTrace();
        }
        finally{
            System.out.println("Programa finalizado");
        }
    }
}