#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ent, *saida;
    int a, b, soma;

    ent = fopen("entrada.txt", "r");
    saida = fopen("saida.txt", "w");

    if (ent == NULL || saida == NULL){
        perror("Erro ao abrir o arquivo.");
        exit(1);
    }

    fscanf(ent, "%d%d", &a, &b);
    soma = a + b;
    fprintf(saida, "soma = %d", soma);

    fclose(ent);
    fclose(saida);

    return 0;
}