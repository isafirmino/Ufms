package listapolimorfismo.ex2;

public class testaCalculadora {
    public static void main(String[] args) {
        calculadora calc = new calculadora();

        int somaDoisInt = calc.somar(2, 3);
        double somaDouble = calc.somar(1.5, 7.5);
        int somaTresInt = calc.somar(5, 4, 6);
        String somaString = calc.somar("5", "7");

        System.out.println("Soma de dois inteiros = " + somaDoisInt);
        System.out.println("Soma doubles = " + somaDouble);
        System.out.println("Soma tres int = " + somaTresInt);
        System.out.println("Soma strings = " + somaString);
    }
}
