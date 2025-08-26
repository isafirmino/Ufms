#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} fracao;


fracao simplifique(fracao f);
float para_real(fracao f);
fracao some(fracao f1, fracao f2);
fracao getFracao();

int main() {
    fracao f1, f2, soma;
    
    printf("Digite a primeira fracao:\n");
    f1 = getFracao();
    
    printf("\nDigite a segunda fracao:\n");
    f2 = getFracao();
    
    printf("RESULTADOS\n");

    f1 = simplifique(f1);
    f2 = simplifique(f2);
    
    printf("\nFracoes simplificadas:\n");
    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    
    printf("\nValor real:\n");
    printf("Fracao 1: %.2f\n", para_real(f1));
    printf("Fracao 2: %.2f\n", para_real(f2));
    
    soma = some(f1, f2);
    printf("\nSoma das fracoes:\n");
    printf("%d/%d\n", soma.numerador, soma.denominador);

    return 0;
}

fracao getFracao() {
    fracao f;
    printf("Numerador: ");
    scanf("%d", &f.numerador);
    printf("Denominador: ");
    scanf("%d", &f.denominador);

    return f;
}

fracao simplifique(fracao f) {
    int a = f.numerador; int b = f.denominador; int mdc;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    mdc = a;
    
    fracao resultado;
    resultado.numerador = f.numerador / mdc;
    resultado.denominador = f.denominador / mdc;
    
    return resultado;
}

float para_real(fracao f) {
    float resultado;

    resultado = (float)f.numerador / f.denominador;

    return resultado;
}

fracao some(fracao f1, fracao f2) {
    fracao resultado;

    resultado.denominador = f1.denominador * f2.denominador;
    resultado.numerador = (f1.numerador * f2.denominador) + (f2.numerador * f1.denominador);
    
    resultado = simplifique(resultado);
    
    return resultado;
}