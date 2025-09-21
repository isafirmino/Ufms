#include <stdio.h>

int calculo_area(int n, int p);

int main(){
    int area, pi=3, raio;

    printf("Insira o valor do raio: ");
    scanf("%d", &raio);

    area = calculo_area(raio, pi);

    printf("Area = %d", area);

    return 0;
}

int calculo_area(int n, int p){
    int area;
    area = p * (n*n);
    return area;
}