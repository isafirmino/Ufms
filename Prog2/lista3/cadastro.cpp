#include <stdio.h>
#define MAX 30

typedef struct {
    char nome[MAX];
    char cpf[MAX];
    char part;
    char socio;
} participante;

participante getRegistro(participante registro);
float getValor (participante pessoa);

int main() {
    float valor;
    participante pessoa;

    pessoa = getRegistro(pessoa);
    valor = getValor(pessoa);
    printf("Valor a ser pago por %s: R$%.2f\n", pessoa.nome, valor);

    return 0;
}

participante getRegistro(participante registro){
    printf("Insira o nome:\n");
    fgets(registro.nome, MAX, stdin);
    printf("Insira o CPF:\n");
    scanf("%s", registro.cpf);
    printf("Qual sua participacao?\n");
    scanf(" %c", &registro.part);
    printf("Voce eh socio?\n");
    scanf(" %c", &registro.socio);

    return registro;
}

float getValor (participante pessoa){
    float valor;

    switch(pessoa.part) {
        case 'A':
            valor = 30.00;
            break;
        case 'B':
            valor = 60.00;
            break;
        case 'C':
            valor = 90.00;
            break;
        case 'D':
            valor = 100.00;
            break;
        default:
            valor = 0.00;
            printf("Tipo de participação invalido\n");
    }
    
    if (pessoa.socio == 'S'){
        valor *= 0.80;
    } 

    return valor;
}