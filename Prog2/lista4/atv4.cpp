#include <stdlib.h>
#include <stdio.h>

int main(){
    int *v;
    v = (int *) malloc (10 * sizeof(int)); // v espera uma variavel int ponteiro mas malloc retorna void ponteiro, então se faz casting(int *)
    return 0;
}