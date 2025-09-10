#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    int n, i = 0, num;

    arq = fopen("30_fib.txt", "r");

    if (arq == NULL){
        perror("Erro ao abrir o arquivo.");
        exit(1);
    }

    printf("Insira um numero menor que 30: ");
    scanf(" %d", &n);
    while (i < n){
        fscanf(arq, "%d", &num);
        i++;
    }

    printf("numero = \n%d\n", num);

    fclose(arq);
    return 0;
}