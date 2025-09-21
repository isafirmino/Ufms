#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *u, *v, i;

    printf("digite o tamanho do vetor\n");
    scanf("%d", &n);

    v = (int *) malloc (sizeof(int)*n);
    u = (int *) malloc (sizeof(int)*n);

    printf("\nEntre com %d valores para V\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("\nEntre com %d valores para U\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &u[i]);
    }

    printf("\nProduto escalar = ");
    for (i =0; i < n; i++){
        printf("%d ", v[i]*u[i]);
    }

    return 0;
}