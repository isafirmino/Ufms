#include <stdio.h>

int digitos(int n){
    if (n < 10){
        return 1;
    }
    else {
        return 1 + digitos(n/10);
    }
}

int main(){
    int num = digitos(2);
    printf("%d\n", num);
}