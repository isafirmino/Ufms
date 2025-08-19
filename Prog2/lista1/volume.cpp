#include <stdio.h>

int main(){
    int raio, altura, volume;

    printf("Entre com raio e altura:\n");
    scanf("%d%d", &raio, &altura);

    volume = 3.14 * raio * raio * altura;
    printf("%d", volume);

    return 0;
}