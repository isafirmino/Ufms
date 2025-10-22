#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo;
    struct cel *seg; //ponteiro pra celula seguinte
};

typedef struct cel celula;

void insira(int y, celula *p);
void imprima(celula *lst);

int main(){
    //cria uma lista encadeada com cabeça
    celula c, *lst;

    //inicializa a lista como vazia
    c.seg = NULL;

    //lst recebe o endereço da cabeça
    lst = &c;

    //sequencia de insercoes
    insira(1, lst);
    insira(3, lst);
    insira(5, lst);
    insira(7, lst);

    imprima(lst);

    return 0;

}

//inserir uma nova celula em uma lista encadeada
void insira(int y, celula *p){
    celula *nova;

    //aloca dinamicamente uma nova celula
    nova = (celula *) malloc(sizeof(celula));

    //inicializa a celula
    nova->conteudo=y;
    nova->seg = p->seg;

    //ajusta o ponteiro pra inserir a nova celula apos p
    p->seg = nova;
}

void imprima(celula *lst) {
    celula *p;

    printf("cabeca -> ");
    for (p=lst->seg; p != NULL; p=p->seg){
        printf("%d -> ", p->conteudo);
    }
    printf("NULL\n");
}