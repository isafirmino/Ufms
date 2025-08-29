#include <stdio.h>
#define MAX 30
#include <string.h>

typedef struct
{
    int numConta;
    char nome[MAX];
    double saldo; 
} cadastro;


int main() {
    int menu; 
    int contasCadastradas = 0;
    int numTemp;
    cadastro contas[15];

    do{
        printf("\nMenu de opcoes:\n1. Cadastrar contas.\n2. Visualizar todas as contas de determinado cliente.\n3. Excluir conta com menor saldo (supondo a nao existencia de saldos iguais).\n4. Sair\n");
        scanf("%d", &menu);
        
        switch (menu)
        {
        case 1:
            {
            if (contasCadastradas != 15){
                int numValido = 0;
                do {
                    printf("Insira o numero da conta: \n");
                    scanf("%d", &numTemp);

                    int achouIgual = 0;
                    
                    for (int i=0; i < contasCadastradas; i ++) {
                        if (contas[i].numConta == numTemp){
                            achouIgual = 1;
                            printf("Numero de conta ja existente.\n");
                        }}
                    if (achouIgual == 0){
                        numValido = 1;
                    }
                }while (numValido == 0);

                contas[contasCadastradas].numConta = numTemp;

                printf("Insira o nome: \n");
                scanf(" %[^\n]%*c", contas[contasCadastradas].nome);

                printf("Insira o saldo: \n");
                scanf("%lf", &contas[contasCadastradas].saldo);

                contasCadastradas += 1;

                } else {
                    printf("Limite de 15 contas atingido\n");
                }
            }
                break;

        case 2: 
        {
            char nomePesquisa[MAX];
            
            if (contasCadastradas == 0){
                printf("Nenhuma conta cadastrada ainda!\n");
                break;
            }

            int contaEncontrada = 0;

            printf("Digite o nome do cliente: \n");
            scanf(" %[^\n]%*c",nomePesquisa);
            for (int i=0; i < contasCadastradas; i++){
                if (strcmp(nomePesquisa, contas[i].nome) == 0){
                    contaEncontrada = 1;
                    printf("\nNome: %s\n", contas[i].nome);
                    printf("Numero da Conta: %d\n", contas[i].numConta);
                    printf("Saldo: R$%lf\n", contas[i].saldo);
                }
            if (contaEncontrada == 0){
                printf("Nenhuma conta com esse nome encontrada!");
            }
            }
        }
            break;

        case 3:
        {
                if (contasCadastradas == 0)
                {
                    printf("\nNenhuma conta para excluir.\n");
                    break; 
                }

                double menorSaldo = contas[0].saldo;
                int indiceMenorSaldo = 0;

                for (int i = 1; i < contasCadastradas; i++)
                {
                    if (contas[i].saldo < menorSaldo)
                    {
                        menorSaldo = contas[i].saldo;
                        indiceMenorSaldo = i;
                    }
                }

                printf("\nConta a ser excluida: N %d, Cliente: %s, Saldo: R$%.2f\n",
                    contas[indiceMenorSaldo].numConta,
                    contas[indiceMenorSaldo].nome,
                    contas[indiceMenorSaldo].saldo);

                for (int i = indiceMenorSaldo; i < contasCadastradas - 1; i++)
                {
                    contas[i] = contas[i + 1];
                }
                contasCadastradas--;

                printf("Conta excluida com sucesso!\n");
                printf("Total de contas agora: %d\n", contasCadastradas);
            }
            break;}
            } while(menu != 4);
            
            return 0;
    }

