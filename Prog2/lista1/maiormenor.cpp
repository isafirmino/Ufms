#include <stdio.h>

int main(){
    int a, b, c;

    printf("Entre com 3 números:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c){
        printf("Maior: %d\n", a);
        if (b > c){
            printf("Menor: %d\n", c);
        }
        else{
            printf("Menor: %d\n", b);
        }}
    else if(b > a && b > c){
        printf("Maior: %d", b);
        if (a > c){
            printf("Menor: %d\n", c);
        }
        else{
            printf("Menor: %d\n", a);
        }}
    else{
        printf("Maior: %d\n", c);
        if (a > b){
            printf("Menor: %d\n", b);
        }
        else{
            printf("Menor: %d\n", a);
        }
    }
    return 0;
}