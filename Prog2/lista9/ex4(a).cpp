#include <stdio.h>

void impares(int n){
    if (n < 2){
        printf("1");
        return;
    }

    else if (n % 2 == 1){
        printf("%d ", n);
        impares(n-2);
    }

    else{
        impares(n - 1);
    }
}

int main(){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    impares(n);
    return 0;
}