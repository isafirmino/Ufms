#include <stdio.h>
#include <stdlib.h>

/* Prototipos */
void leia_ints (char nome_do_arquivo[], int a[], int &n);
int conte (int a[], int n);

/* Main */
int main() {
  char filename[30];
  int a[1000000], n;

  // Leia o nome do arquivo
  printf("Entre com o nome do arquivo:\n");
  scanf("%29s", filename);

  // Carregue o arquivo no vetor a
  leia_ints(filename, a, n);

  // Conte e imprima quantas vezes 3 elementos somam 0
  printf("%d\n", conte(a, n));
}

// Funcao que abre arquivo e carrega todos os ints para o vetor a
void leia_ints (char nome_do_arquivo[], int a[], int &n) { //&n a alteração que vc fizer dentro da função em n, vai continuar fora da função, vetor é sempre passado por referência
  FILE *f;
  int nread;

  f = fopen(nome_do_arquivo, "r");
  if (f == NULL) {
    perror("Erro ao abrir o arquivo");
  }
  else {
    n = 0;
    while(1) {
      nread = fscanf(f, "%d", &a[n]);
      if (nread == EOF) 
        break;

      n = n + 1;
    }
    n = n - 1;
  }
}

// Funcao que conta e retorna quantas vezes 3 elementos somam 0
int conte (int a[], int n) {
  int i, j, k, c = 0;

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      for (k = j + 1; k < n; k++) {
        if ( (a[i] + a[j] + a[k]) == 0)
          c = c + 1;
      }
    }
  }

  return c;
}