#include <stdio.h>

int main(){
    int a, *aptr;

    a = 5;
    aptr = &a;

    printf("endereço a = %d\n aptr = %p\n", &a, aptr);
    printf("valor a = %d\n valor *aptr = %d", a, *aptr);
}