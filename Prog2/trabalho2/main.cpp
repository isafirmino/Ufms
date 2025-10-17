#include <stdio.h>
#include <stdlib.h>


// 1 criar a estrutura de um nó
typedef struct Node
{
    int dado;
    struct Node* anterior; //aponta para o nó anterior da lista
    struct Node* posterior;   //aponta para o próximo
}Node;

//2 estrutura para inicializar a lista
typedef struct Lista
{
    Node* cabeca; //celula cabeça
    int tamanho;
}Lista;


//3 fazer a função de criar um novo nó - retorna o ponteiro para o novo nó
Node* criarNo(int valor) 
{
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL){
        return NULL; //falha no malloc
    }
    novoNo->dado = valor;
    novoNo->anterior = NULL;
    novoNo->posterior = NULL;

    return novoNo;
};

//4 fazer funcao para inicializar a lista
void inicializarLista(Lista* lista) {
    lista->cabeca = criarNo(-1);     // Cria a célula-cabeça
    
    // Na lista circular, a cabeça aponta para si mesma
    lista->cabeca->anterior = lista->cabeca; 
    lista->cabeca->posterior = lista->cabeca; 
    lista->tamanho = 0;
}

//5 fazer função para verificar se a lista está vazia
int listaVazia(Lista* lista) {
    return lista->cabeca->posterior == lista->cabeca;
}

//6 fazer função para inserir elemento no início
void inserirInicio(Lista* lista, int valor) {
    struct Node* novoNo = criarNo(valor);
    
    if (novoNo == NULL) {
        return;  // Falha na criação do nó
    }
    
    // Conecta o novo nó entre a cabeça e o primeiro elemento atual
    novoNo->posterior = lista->cabeca->posterior;  // Novo nó aponta para o antigo primeiro
    novoNo->anterior = lista->cabeca;        // Novo nó aponta para a cabeça (anterior)
    
    // Atualiza os ponteiros dos nós vizinhos
    lista->cabeca->posterior->anterior = novoNo;  // Antigo primeiro aponta para novo nó (como anterior)
    lista->cabeca->posterior = novoNo;        // Cabeça aponta para novo nó (como próximo)
    
    lista->tamanho++;
}

//7 fazer funcao para inserir no final
void inserirFinal(Lista* lista, int valor){
    Node* novoNo = criarNo(valor);

    if(novoNo == NULL){
        return;
    }
    //concta o novo no entre o ultimo elemento e a cabeca
    novoNo->anterior = lista->cabeca->anterior; // novo no aponta para antigo ultimo
    novoNo->posterior = lista->cabeca; //novo no aponta para cabeca
    lista->cabeca->anterior->posterior = novoNo; //antigo ultimo aponta para novo como proximo
    lista->cabeca->anterior = novoNo; //cabeca aponta para novo no
    lista->tamanho++;
}


void imprimirLista(Lista* lista){
    if(listaVazia(lista)){
        printf("Lista vazia.\n");
        return;
    }

    Node* atual = lista->cabeca->posterior;
    printf("Elementos: ");

    //percorrer ate voltar a cabeca
    while (atual != lista->cabeca){
        printf("%d", atual->dado);
        if (atual->posterior != lista->cabeca){
            printf(" <-> ");
        }
        atual = atual->posterior;
    }
    printf("\n");
}

int main(){
    Lista listaTeste;

    inicializarLista(&listaTeste);

    inserirInicio(&listaTeste, 10);
    imprimirLista(&listaTeste);

    inserirFinal(&listaTeste, 20);
    imprimirLista(&listaTeste);

    inserirInicio(&listaTeste, 5);
    inserirFinal(&listaTeste, 30);
    imprimirLista(&listaTeste);

    return 0;
}