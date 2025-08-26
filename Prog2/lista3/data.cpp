#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

int idade (data a, data h);

int main(){
    int idadeAtual;

    data atual = {22, 8, 2025};
    data aniver;

    printf("Digite sua data de aniversario:\n");
    scanf("%d%d%d", &aniver.dia, &aniver.mes, &aniver.ano);
    idadeAtual = idade(aniver, atual);
    printf("idade = %d", idadeAtual);

    return 0;
}

int idade(data a, data h){
    int idadeAtual;
    idadeAtual = h.ano - a.ano;
    if (h.mes < a.mes){
        idadeAtual -= 1;
    }
    else if (h.mes == a.mes){
        if (h.dia < a.dia){
            idadeAtual -= 1;
        }
    }

    return idadeAtual;
}