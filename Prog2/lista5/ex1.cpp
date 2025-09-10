#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    int i, a;
    arq = fopen("entrada.txt", "w");

    if (arq == NULL){
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    printf("Digite dois numeros: \n");
    scanf("%d%d", &i, &a);
    fprintf(arq, "%d \n%d", i, a);

    fclose(arq);

    return 0;
}