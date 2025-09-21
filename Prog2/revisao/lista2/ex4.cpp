#include <stdio.h>
#define MAX 10

int main(){
    int m, n, matriz[MAX][MAX], contador=0, ln=0, coln=0;

    printf("Insira o numero de linhas: ");
    scanf("%d", &m);

    printf("Insira o numero de colunas: ");
    scanf("%d", &n);

    for(int i=0; i<m; i++){
        contador = 0;
        for(int j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] == 0){
                contador += 1;
            } if (contador == n){
                ln += 1;
            }
        }
    }

    for(int j=0; j<n; j++){
        contador = 0;
        for(int i=0; i<m; i++){
            if(matriz[i][j]==0){
                contador +=1;
            } if(contador==m){
                coln += 1;
            }
        }
    }

    printf("A matriz possui %d linhas nulas e %d colunas nulas", ln, coln);


    return 0;
}