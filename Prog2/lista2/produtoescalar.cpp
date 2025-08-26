#include <stdio.h>

int main() {
    int n, u[10], v[10], produto;

    printf("Determine o valor de n:\n");
    scanf("%d", &n);

    produto = 0;
    for (int i = 0; i < n; i++){
        printf("Insira valor de u:\n");
        scanf("%d", &u[i]);
        printf("Insira valor de v:\n");
        scanf("%d", &v[i]);
        produto += (u[i]*v[i]);
    }
    
    printf("Produto = %d\n", produto);

    return 0;
}