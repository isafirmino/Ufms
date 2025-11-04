#include <stdio.h>
#define TAMANHO_FILA 30

void enfileire(int f[], int s, int *t, int x);

int main(){
    int f[TAMANHO_FILA], s, t = 0;
    s = t; //fila vazia

    enfileire(f, s, &t, 33);
    enfileire(f, s, &t, 7);
    enfileire(f, s, &t, 11);
    enfileire(f, s, &t, 2);
    for (int i=s; i < t; i++){
        printf("%d  ", f[i]);
    }

    return 0;
}

void enfileire(int f[], int s, int *t, int x){
    if (*t == TAMANHO_FILA){
        printf("Queue overflow");
        return;
    }
    f[*t] = x;
    *t += 1;
}