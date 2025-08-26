#include <stdio.h>
#define MAX 10

int main() {
    int matriz[MAX][MAX], linha , col;
    
    printf("Quantidade de linhas e colunas:\n");
    scanf("%d%d", &linha, &col);

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < col; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int j = 0; j < col; j++){
        for (int i = 0; i < col; i++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}