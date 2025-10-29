#include <stdio.h>
#include <stdlib.h>

struct celula
{
    int conteudo;
    struct celula *seg;
};

typedef struct celula celular;

void insira(int y, celular *p);
void imprimir(celula *p);
void remova_tudo(celula *p);
void remova_tudoR(celula *lst);
void contagem_celulas(celula *lst);


int main(){
    celula c, *lst;

    c.seg = NULL; //final da lista
    lst = &c; //indica a cabeca

    insira(50, lst);
    insira(10, lst);
    insira(20, lst);
    insira(30, lst);
    insira(7, lst);

    imprimir(lst);
    contagem_celulas(lst);
    //printf("%d", cont);
    remova_tudoR(lst);
    imprimir(lst);


    return 0;

}

void insira(int y, celula *p){
    celular *nova;

    nova = (celula *) malloc (sizeof(celular));

    nova->seg = p->seg;
    nova->conteudo = y;
    p->seg = nova;
}

void imprimir(celula *p){
    celular *r;

    printf("cabeca -> ");
    for (r = p->seg; r!=NULL; r= r->seg){
        printf("%d -> ", r->conteudo);
    }

    printf("NULL\n");
}

void remova_tudo(celula *lst){
   celula *p, *aux;

   for (p = lst->seg; p != NULL; p = aux){
    aux = p -> seg;
    free(p);
   }
   lst->seg = NULL;
}

void remova_tudoR(celula *lst){
    if (lst->seg == NULL){
        return;
    }
    remova_tudoR(lst->seg);
    free(lst->seg);
    lst->seg = NULL;
}

void contagem_celulas(celula *lst){
    celula *p;
    int contagem = 0;

    for (p = lst->seg; p != NULL; p = p->seg){
        contagem += 1;
    }
    printf("%d\n", contagem);
    
}