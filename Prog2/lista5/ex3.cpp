#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ent, *saida;
    int n, a, b, soma;

    ent = fopen("entrada.txt", "r");
    saida = fopen("saida.txt", "w");

    if (ent == NULL || saida == NULL){
        perror("Erro ao abrir o arquivo.");
        exit(1);
    }

    while (1) {
        n = fscanf(ent, "%d%d", &a, &b);
        if(n == EOF){
            break;
        }
        soma = a+b;
        fprintf(saida, "%d; ", soma);
    }

    fclose(ent);
    fclose(saida);

    return 0;
}