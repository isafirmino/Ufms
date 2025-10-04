#include <stdio.h>
#define MAX 20

typedef struct{
    int codigo;
    char descricao[MAX];
    double preco;
}produtos;

int main(){
    int n, codigo_pedido, quantidade_pedido[10];
    produtos produto[10];
    double total=0.0;

    for(int i=0; i<n; i++){
        quantidade_pedido[i] = 0;
    }

    printf("Insira o numero de pedidos a serem lidos:\n");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Insira o codigo do produto:\n");
        scanf("%d", &produto[i].codigo);

        printf("Insira a descricao do produto:\n");
        scanf("%s", produto[i].descricao);

        printf("Insira o preco do produto:\n");
        scanf("%lf", &produto[i].preco);
    }

    printf("Cadastro finalizado.\n");
    printf("Faca seu pedido, para encerrar digite 0\n");

    while (true){
        printf("Digite o codigo do produto:\n");
        scanf("%d", &codigo_pedido);

        if (codigo_pedido == 0){
            break;
        }

        for (int i=0; i<n; i++){
            if (codigo_pedido == produto[i].codigo){
                printf("Quantidade do produto:\n");
                scanf("%d", &quantidade_pedido[i]);
                total += produto[i].preco * quantidade_pedido[i];
                break;
            }
        }
    }

    printf("PEDIDO FINALIZADO\n");
    for (int i=0; i<n; i++){
        if (quantidade_pedido[i] > 0){
            printf("%d x %s\n", quantidade_pedido[i], produto[i].descricao);
        }
    }
    printf("TOTAL R$%.2f\n", total);

    return 0;
}
