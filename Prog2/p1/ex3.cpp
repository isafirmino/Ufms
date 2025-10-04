#include <stdio.h>
#include <stdlib.h>

#define LINHA 2048

int main() {
    FILE *impar, *par, *recuperado;
    char *resultado_impar, *resultado_par;

    char linha[LINHA];

    impar = fopen("lotr_cap1_odd.txt", "r");
    if (impar == NULL) {
        perror("Erro ao abrir o arquivo lotr_cap1_odd.txt");
        exit(1);
    }

    par = fopen("lotr_cap1_even.txt", "r");
    if (par == NULL) {
        perror("Erro ao abrir o arquivo lotr_cap1_even.txt");
        fclose(impar);
        exit(1);
    }

    recuperado = fopen("lotr_cap1_recovered.txt", "w");
    if (recuperado == NULL) {
        perror("Erro ao criar o arquivo lotr_cap1_recovered.txt");
        fclose(impar);
        fclose(par);
        exit(1);
    }

    while (1) {
        resultado_impar = fgets(linha, LINHA, impar);
        if (resultado_impar != NULL) {
            fputs(linha, recuperado);
        }

        resultado_par = fgets(linha, LINHA, par);
        if (resultado_par != NULL) {
            fputs(linha, recuperado);
        }

        if (resultado_impar == NULL && resultado_par == NULL) {
            break;
        }
    }

    fclose(impar);
    fclose(par);
    fclose(recuperado);

    printf("Arquivo 'lotr_cap1_recovered.txt' pronto!\n");

    return 0;
}