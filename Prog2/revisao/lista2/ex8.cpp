#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

void fazer_copia(char* s1, char* s2, int n);

int main(){
    char s1[MAX], s2[MAX];
    int n;

    printf("Insira uma string:\n ");
    scanf("%s", s1);

    printf("Insira outra string:\n ");
    scanf("%s", s2);

    printf("Insira um numero\n");
    scanf("%d", &n);

    fazer_copia(s1, s2, n);
    printf("Copia: %s\n", s1);



    return 0;
}


void fazer_copia(char* s1, char* s2, int n){
    int tam = strlen(s1);
    for(int i=0; i<n; i++){
        if(s2[i] == '\0'){
            break;
        }
        s1[tam+i] = s2[i];
    }
    s1[tam+n] = '\0';
}