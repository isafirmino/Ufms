#include <stdio.h>
#define MAX 15

int main(){
    char nome[MAX];

    printf("Insira um nome: ");
    fgets(nome, MAX, stdin);

    for(int i=0; i<4; i++){
        printf("%c", nome[i]);
    }



    return 0;
}