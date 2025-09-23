#include <stdio.h>
#define MAX 20

typedef struct
    {
        char nome[MAX];
        int codigo;
        char *frutas[4];
    }vendinha;

int main(){
    vendinha conta[10];
    int menu;
    int codigotemp;
    int contas_cadastradas;

    printf("Escolha um numero:\n1-Cadastrar conta\n2-Fazer pedido");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        if (contas_cadastradas != 10){
            int conta_valida = 0;
            do{
                printf("Insira um codigo:\n");
                scanf("%d", &codigotemp);

                int achouigual = 0;

                for(int i = 0; i < contas_cadastradas; i++){
                    if (conta[i].codigo == codigotemp){
                        printf("Codigo ja cadastrado!\n");
                        achouigual = 1;
                    }}
                if(achouigual == 0){
                    conta_valida = 1;
                }
            }while(conta_valida == 0);
            conta[contas_cadastradas].codigo=codigotemp;

            printf("Insira nome da vendinha:\n");
            scanf("%s", conta[contas_cadastradas].nome);
            contas_cadastradas++;

        }
        break;
    
    default:
        break;
    }
    
}