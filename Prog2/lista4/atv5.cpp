#include <stdio.h>
#include <stdlib.h>

float fazerMedia(const int *v, int n);

int main(){
    int i, n, *v;
    float media;

    printf("Insira a quantidade de notas a serem lidas: \n");
    scanf("%d", &n);

    v = (int *) malloc (sizeof(int)*n);

    printf("Entre com %d notas:\n", n);
    for (i=0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++){
        printf("%d\n", v[i]);}

    media = fazerMedia(v, n);
    printf("Media = %.2f", media);

    free(v);
    return 0;
}

float fazerMedia(const int *v, int n){
    float media = 0.0;
    int i;

    for (i = 0; i < n; i++){
        media += v[i];
    }

    media = media / n;
    return media;
}