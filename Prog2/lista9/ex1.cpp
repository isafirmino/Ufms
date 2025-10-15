#include <stdio.h>

void imprime_10_1(int n){
    if (n==0){
        return;
    }
    else {
        printf("%d ", n);
        imprime_10_1(n - 1);
    }
}

int main(){
    int n=10;
    imprime_10_1(n);
    return 0;
}