package listapolimorfismo.ex1;

public class zoologico {
    public static void main(String[] args) {
        animal [] animais = new animal[5];

        animais[0] = new cachorro();
        animais[1] = new gato();
        animais[2] = new passaro();
        animais[3] = new gato();
        animais[4] = new passaro();

        for(animal animal: animais) {
            animal.emitirSom();
        }
    }
}
