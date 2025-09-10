#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *resultado;
    int i, a = 0, b = 1, soma;

    resultado = fopen("30_fib.txt", "w");

    if (resultado == NULL){
        perror("Erro ao abrir o arquivo.");
        exit(1);
    }

    fprintf(resultado, "%d\n%d\n", a, b);

    for (i = 2; i < 30; i ++){
        soma = a + b;
        fprintf(resultado, "%d\n", soma);
        a = b;
        b = soma;
    }

    fclose(resultado);
    return 0;
}