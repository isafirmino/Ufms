#include <stdio.h>
#define MAX 10

int main(){
    int matriz[MAX][MAX], m, n;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &m);

    printf("Insira a quantidade de colunas: ");
    scanf("%d", &n);

    printf("Insira %d numeros", m*n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            printf("%d ", matriz[i][j]);
        } printf("\n");
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", matriz[j][i]);
        } printf("\n");
    }
    


    return 0;
}