def ver_matriz(m, n):
    matriz = []
    soma =  0
    for i in range(m):
        nova_coluna = list(map(int, input().split()))
        matriz.append(nova_coluna)
        for j in range(n):
            if j == 0:
                maior_num = matriz[i][j]
            else:
                if matriz[i][j] > maior_num:
                    maior_num = matriz[i][j]
        soma += maior_num    

    print(soma)

def main():
    m = int(input()) #linhas
    n = int(input()) #colunas
    ver_matriz(m, n)
    
main()