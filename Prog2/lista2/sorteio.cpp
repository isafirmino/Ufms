#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[6], x, n = 1;

    for (int i = 0; i < 6; i++) {
        x = (rand() % 60) + 1;
        numeros[i] = x;
    }

    for (int i = 0; i < 6; i++){
        printf("%d", numeros[i]);
    }
    while (n != 0){
        printf("Escolha um número:\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            if (numeros[i] == n) {
                printf("Seu numero foi encontrado! Está na posição %d", i);
                break;
            }
        }
        
    }
    

}