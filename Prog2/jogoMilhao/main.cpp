#include <stdio.h>
#include <stdlib.h>

typedef struct perguntas{
    char nivel;
    char descricao[200];
    char alt[4][30];
    char alt_correta;
}perguntas;

int main(){
    FILE *arq;
    perguntas pergunta;

    //pergunta = (struct perguntas*) malloc (sizeof(struct perguntas));
    arq = fopen("perguntas.dat", "rb");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while(fread(&pergunta, sizeof(perguntas), 1, arq)==1){
        printf("nivel: %s\n decricao: %s\n alt: %s\nalt correta: %s", pergunta.nivel, pergunta.descricao, pergunta.alt, pergunta.alt_correta);
    }

    fclose(arq);
    return 0;
}