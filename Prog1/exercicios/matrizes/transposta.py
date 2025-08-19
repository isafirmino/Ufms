def fazer_matriz(m, n):
    matriz = []
    transposta = []
    for i in range(m):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
    
    for _ in range(n):
        transposta.append([0] * m)
    
    for i in range(m):
        for j in range(n):
            transposta[j][i] = matriz[i][j]
    
    for x in range(n):
        for y in range(m):
            print(transposta[x][y], end=" ")
        print()

def main():
    m, n = map(int, input().split())
    fazer_matriz(m, n)

main()