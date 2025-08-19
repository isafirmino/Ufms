def calcular(n):
    matriz = []
    for _ in range(n):
        nova_linha = [0] * n
        matriz.append(nova_linha)
    
    valor = 1
    inicio_linha, fim_linha = 0, n - 1
    inicio_col, fim_col = 0, n -1

    while valor <= n*n:
        #primeira linha
        for i in range(inicio_col, fim_col + 1):
            matriz[inicio_linha][i] = valor
            valor += 1
        inicio_linha += 1
        #coluna direita
        for i in range(inicio_linha, fim_linha+1):
            matriz[i][fim_col] = valor
            valor += 1
        fim_col -= 1
        #linha inferior
        for i in range(fim_col, inicio_col-1, -1):
            matriz[fim_linha][i] = valor
            valor += 1
        fim_linha -= 1
        #linha esquerda
        for i in range(fim_linha, inicio_linha-1, -1):
            matriz[i][inicio_col] = valor
            valor += 1
        inicio_col += 1
    
    T = n*n
    campo = len(str(T))
    
    for x in range(len(matriz)):
        for y in range(len(matriz)):
            print(f"{matriz[x][y]:{campo}}", end = " ")
        print()


def main():
    n = int(input())
    calcular(n)
main()