#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    double a, t;

    printf("Tempo: ");
    scanf("%lf", &t);

    printf("N = ");
    scanf(" %d", &n);

    a = t / (n * n * n);

    printf("Resultado a = %lf\n");
}