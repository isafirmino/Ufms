#include <stdio.h>

int main(){
    int velocidade, multa;

    printf("Entre com a velocidade:\n");
    scanf("%d", &velocidade);

    if (velocidade > 80){
        multa = (velocidade - 80) * 5 ;
        printf("Voce foi multado em R$%d", multa);
    }

    return 0; 
}