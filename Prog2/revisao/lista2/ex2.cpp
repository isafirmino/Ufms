#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int main(){
    int v[MAX], x, num=1;

    for(int i=0; i<6; i++){
        x = (rand()%60)+1;
        v[i] = x;
        printf("%d ", v[i]);
    }
    
    while(num!=0){
        printf("\nEscolha um numero:\n");
        scanf("%d", &num);
        for(int i=0; i<MAX; i++){
            if(num == v[i]){
                printf("Numero encontrado na posicao %d", i);           
            }
        }
    }

    return 0;
}