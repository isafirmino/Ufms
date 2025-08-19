def criar_matriz(m, n):
    matriz = []
    for i in range(m):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
        for j in range(n):
            if i == 0 and j == 0:
                maior_num = matriz[0][0]
            else:
                if matriz[i][j] > maior_num:
                    maior_num = matriz[i][j]
    return maior_num


def main():
    m, n = map(int, input().split()) #linha coluna
    matriz = criar_matriz(m, n)
    print(matriz)

main()