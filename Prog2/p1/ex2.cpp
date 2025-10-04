#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidade = 5;
    int quantidade_armazenada = 0;
    int num;

    int* vetor = (int*) malloc(capacidade * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Nao foi possivel alocar a memoria.\n");
        return 1;
    }

    printf("Digite quantos inteiros positivos desejar, digite 0 para parar.\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (quantidade_armazenada == capacidade) {
            printf("Expandindo capacidade do vetor\n");
            int nova_capacidade = capacidade * 2;

            int* vetor_novo = (int*) malloc(nova_capacidade * sizeof(int));
            if (vetor_novo == NULL) {
                printf("Erro: Falha ao alocar memoria!\n");
                free(vetor); 
                return 1;
            }
            for (int i = 0; i < capacidade; i++) {
                vetor_novo[i] = vetor[i];
            }
            free(vetor);
            vetor = vetor_novo;
            capacidade = nova_capacidade;
        }

        vetor[quantidade_armazenada] = num;
        quantidade_armazenada++;
    }

    for (int i = 0; i < quantidade_armazenada; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}