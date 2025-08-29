#include <stdio.h>
#include <stdlib.h> // Para rand(), srand()
#include <time.h>   // Para time()
#include <string.h> // Se precisar de funções de string no futuro

// Enums e Struct não mudam
typedef enum {
    OUROS, ESPADAS, COPAS, PAUS
} Naipe;

typedef enum {
    AS = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ, VALETE, DAMA, REI
} Valor;

typedef struct {
    Valor valor;
    Naipe naipe;
} Carta;

// Função de impressão (não muda)
void imprimirCarta(Carta c) {
    switch (c.valor) {
        case AS:    printf("As");    break;
        case DOIS:  printf("Dois");  break;
        case TRES:  printf("Tres");  break;
        case QUATRO:printf("Quatro");break;
        case CINCO: printf("Cinco"); break;
        case SEIS:  printf("Seis");  break;
        case SETE:  printf("Sete");  break;
        case OITO:  printf("Oito");  break;
        case NOVE:  printf("Nove");  break;
        case DEZ:   printf("Dez");   break;
        case VALETE:printf("Valete");break;
        case DAMA:  printf("Dama");  break;
        case REI:   printf("Rei");   break;
    }
    switch (c.naipe) {
        case OUROS:   printf(" de Ouros\n");   break;
        case ESPADAS: printf(" de Espadas\n"); break;
        case COPAS:   printf(" de Copas\n");   break;
        case PAUS:    printf(" de Paus\n");    break;
    }
}

int main() {
    srand(time(NULL));

    Carta baralho[52];
    int contadorDeCartas = 0;

    const Naipe todosOsNaipes[] = {OUROS, ESPADAS, COPAS, PAUS};
    const Valor todosOsValores[] = {
        AS, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, 
        OITO, NOVE, DEZ, VALETE, DAMA, REI
    };

    int numNaipes = sizeof(todosOsNaipes) / sizeof(todosOsNaipes[0]);
    int numValores = sizeof(todosOsValores) / sizeof(todosOsValores[0]);


    for (int i = 0; i < numNaipes; i++) {
        Naipe n = todosOsNaipes[i]; 

        for (int j = 0; j < numValores; j++) {
            Valor v = todosOsValores[j]; 

            baralho[contadorDeCartas].naipe = n;
            baralho[contadorDeCartas].valor = v;
            contadorDeCartas++;
        }
    }
    
    Carta mao[3];
    int tamanhoBaralho = 52;

    printf("\nSorteando 3 cartas\n");
    for (int i = 0; i < 3; i++) {
        int indiceSorteado = rand() % tamanhoBaralho;
        mao[i] = baralho[indiceSorteado];
        baralho[indiceSorteado] = baralho[tamanhoBaralho - 1];
        tamanhoBaralho--;
    }

    printf("\nCartas sorteadas:\n");
    for (int i = 0; i < 3; i++) {
        imprimirCarta(mao[i]);
    }

    return 0;
}