#include <stdio.h>
#define MAX 20

int main(){
    int a, b,aux, dec=1;

    printf("Entre com A e B: ");
    scanf("%d%d", &a, &b);

    if(a/b < 1){
        printf("%d, %d -> Nao e sufixo", a, b);
    }

    aux = b;

    while(aux > 0){
        aux = aux/10;
        dec *= 10;
    } printf("%d\n", dec);

    a = a % dec;
    printf("a = %d\n", a);

    if(a==b){
        printf("%d, %d -> sufixo", a, b);
    }

    else{
        printf("%d, %d -> Nao e sufixo", a, b);
    }


    return 0;
}