#include <stdio.h>

int calcular_produto(int v[], int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return v[0];
    }
    else{
        return calcular_produto(v, n-1) * v[n-1];
    }

}

int main(){
    int v[3];
    printf("Adicione 3 numeros: ");
    scanf("%d%d%d", &v[0], &v[1], &v[2]);
    int prod = calcular_produto(v, 3);
    printf("produto = %d\n", prod);
}