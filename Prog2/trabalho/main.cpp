#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeArray_int(const int *array, size_t n);
void bubbleSortGenerico(void *base, size_t nItems, size_t size, int (*compare) (const void *, const void*));
int comparaInt (const void *a, const void *b);
void imprimeArray_float(const float *array, size_t n);
int comparaFloat(const void *a, const void *b);
void imprimeArray_string(const float *array, size_t n);
int comparaString(const void *a, const void *b);

void bubbleSortGenerico(void *base, size_t nItems, size_t size, int (*compare) (const void *, const void*)){
    char *baseChar = (char *)base;
    void *aux = malloc(size);
    
    for (size_t i = 0; i < nItems - 1; i++){
        for (size_t j = 0; j < nItems - i - 1; j++){
            void *num1 = baseChar + j * size;
            void *num2 = baseChar + (j+1) * size;

            if (compare(num1, num2) > 0){
                memcpy(aux, num1, size);
                memcpy(num1, num2, size);
                memcpy(num2, aux, size);
            }
        }
    } free(aux);
}

int comparaInt (const void *a, const void *b){
    int inta = *(const int *)a;
    int intb = *(const int *)b;
    return (inta - intb);
}

void imprimeArray_int(const int *array, size_t n){
    for(size_t i = 0; i < n; i++){
        printf("%d ", array[i]);
    } printf("\n");
}

void imprimeArray_float(const float *array, size_t n){
    for(size_t i = 0; i < n; i++){
        printf("%.2f ", array[i]);
    } printf("\n");
}

int comparaFloat(const void *a, const void *b){
    float floata = *(const float *)a;
    float floatb = *(const float *)b;
    //não pode usar só subtração pois ele arredondaria 0.2 por exemplo para 0, como se fossem iguais
    if (floata > floatb) return 1;
    if (floata < floatb) return -1;
    return 0;
}

void imprimeArray_string(const char *array[], size_t n){
    for (size_t i = 0; i < n; i++){
        printf("%s ", array[i]);
    } printf("\n");
}

int comparaString(const void *a, const void *b){
    const char *stra = *(const char **)a;
    const char *strb = *(const char **)b;
    return strcmp(stra, strb);
}

int main(){
    printf("Testando com inteiros\n");
    int numeros[] = {9, 4, 6, 2, 1, 8, 5, 7, 3};
    size_t nItems = sizeof(numeros) / sizeof(numeros[0]);

    imprimeArray_int(numeros, nItems);
    bubbleSortGenerico(numeros, nItems, sizeof(int), comparaInt);
    imprimeArray_int(numeros, nItems);

    printf("\n Testando com floats\n");
    float notas[] = {10.00, 5.90, 6.30, 8.20, 8.30, 2.40};
    size_t nFloat = sizeof(notas) / sizeof(notas[0]);

    imprimeArray_float(notas, nFloat);
    bubbleSortGenerico(notas, nFloat, sizeof(float), comparaFloat);
    imprimeArray_float(notas, nFloat);

    printf("\nTestanto com strings\n");
    const char *nomes[] = {"Isa", "Joao", "Ana", "Carlos", "Bianca"};
    size_t nNomes = sizeof(nomes) / sizeof(nomes[0]);

    imprimeArray_string(nomes, nNomes);
    bubbleSortGenerico(nomes, nNomes, sizeof(char *), comparaString);
    imprimeArray_string(nomes, nNomes);

    return 0;
}
