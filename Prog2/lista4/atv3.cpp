#include <stdio.h>

int main(){
    int x, y, *p, *q;

    x = 2;
    y = 8;
    p = &x;
    q = &y;

    printf("endereço x: %p\nx = %d", &x, x);
    printf("\nvalor p = %p\nvalor *p = %d", p, *p);
    printf("\nendereço y = %p\ny = %d", &y, y);
    printf("\nendereço de P = %p", &p);

    return 0;
}